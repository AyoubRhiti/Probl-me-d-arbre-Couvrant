#include "arete.h"
#include "sommet.h"
#include "graphe.h"
#include "mainwindow.h"

#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
#include <QPainter>
#include <QStyleOption>
#include <QLinearGradient>
#include <QDebug>
#include <QApplication>

Sommet::Sommet(Graphe *graphe, qreal id)
    : graph(graphe),num(id),penWidth(1),highlight(false)
{
    setFlag(ItemIsMovable);
    setFlag(ItemIsSelectable);
    setFlag(ItemSendsGeometryChanges);
    setCacheMode(DeviceCoordinateCache);
    this->id=id;
    update();
    dance = false;
}

void Sommet::addEdge(Arete *arete)
{
    areteList << arete;
    arete->adjust();
}
void Sommet::removeEdge(Arete *arete)
{
    areteList.removeOne(arete);
    arete->adjust();
}

QList<Arete *> Sommet::Aretes() const
{
    return areteList;
}

void Sommet::click()
{
    highlight=!highlight;
    update();

}


QRectF Sommet::boundingRect() const
{
    int radius=60;
    return QRectF(-radius/2 + .5, -radius/2 + .5, radius + 4, radius + 4);
}


void Sommet::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(option);
    Q_UNUSED(widget);
    int  radius=50;
    if(ter==true){
          painter->setBrush(Qt::magenta);
    }
    else if(highlight)
        painter->setBrush(Qt::cyan);
    else
        painter->setBrush(Qt::yellow);


    painter->setPen(QPen(Qt::black, 1.5, Qt::SolidLine));
    //painter->setBrush(QBrush(Qt::yellow));
    painter->drawEllipse(- radius/2, - radius/2, radius, radius);

    QFont font; font.setPixelSize(20);
    painter->setFont(font);
    QRectF rect(- radius/2, - radius/2, radius, radius);
    painter->drawText(rect,Qt::AlignCenter,QString::number(num));


}
QVariant Sommet::itemChange(GraphicsItemChange change, const QVariant &value)
{
    switch (change) {
    case ItemPositionHasChanged:
        foreach (Arete *arete, areteList)
            arete->adjust();
        break;
    default:
        break;
    };
    return QGraphicsItem::itemChange(change, value);
}
void Sommet::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event){
    bool nodeex=false;
    if(graph->color){
        this->ter=true;
        update();
       for(int i=0; i<graph->termoblig.size();i++){
           if(graph->termoblig[i]==this) {
               nodeex=true;
    }}
       if(nodeex==false){
            graph->termoblig.push_back(this);
            qInfo()<<"add node " << this->id;
       }
}}
void Sommet::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    static bool select2=false;

    if(graph->addEdgeFun){
        if(!select2){
            graph->setNodeToAddEdge(this,1);
            select2=true;
        }
        else{
            graph->setNodeToAddEdge(this,2);
            select2=false;
            graph->addEdge();
        }
    }
    else if(graph->EraserFun){
        qDebug()<<"delete node";
        foreach (Arete *arete, areteList) {
            arete->remove();
        }
        graph->removeItem(this);

    }
    else{
        graph->select(this);
    }
    update();
    QGraphicsItem::mousePressEvent(event);
}

void Sommet::mouseReleaseEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseReleaseEvent(event);
    setCursor(Qt::OpenHandCursor);
}

void Sommet::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    update();
    QGraphicsItem::mouseMoveEvent(event);
    setCursor(Qt::ClosedHandCursor);
}

void Sommet::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    QGraphicsItem::hoverEnterEvent(event);
    setCursor(Qt::PointingHandCursor);
}
Sommet* Sommet::sommet() const
{
    return this->somm;
}


qreal Sommet::getPenWidth() const
{
    return penWidth;
}

void Sommet::setPenWidth(const qreal &value)
{
    penWidth = value;
    update();
}
