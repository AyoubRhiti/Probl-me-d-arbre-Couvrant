#include "arete.h"
#include "sommet.h"
#include "graphe.h"

#include <math.h>
#include <QVector>
#include <QPainter>
#include <QPolygonF>
#include <QPointF>
#include <QPoint>
#include <QDebug>
#include <qmath.h>
#include <QPen>
#include <QtMath>



Arete::Arete(Sommet *sourceNode, Sommet *destNode,Graphe *graphe )//,bool rand=false)
    :  graph(graphe),arrowSize(20)
{
   // setFlag(ItemIsSelectable);
   // setFlag(ItemSendsGeometryChanges);
    //setCacheMode(DeviceCoordinateCache);
    setZValue(-1);
    poids=0;
    macol=Qt::black;
    coloration=false;
    source = sourceNode;
    dest = destNode;
    source->addEdge(this);
    dest->addEdge(this);
    adjust();
}

Sommet *Arete::sourceNode() const
{
    return source;
}

Sommet *Arete::destNode() const
{
    return dest;
}
double Arete::ponderer()
{
    QInputDialog* recupererPoids= new QInputDialog();
    recupererPoids->setInputMode(QInputDialog::IntInput);
    recupererPoids->setFixedSize(300,350);
    recupererPoids->setContentsMargins(5,5,5,5);
    recupererPoids->setWindowTitle("Ponderer Votre Graphe");
    recupererPoids->setGraphicsEffect(graphicsEffect());
    recupererPoids->setCancelButtonText("annuler");
    recupererPoids->setOkButtonText("Valider");
    if(recupererPoids->exec()){
        poids = recupererPoids->intValue();
        return poids;
    }
    else{
        return 0;
    }

}

int Arete::getpoids()
{
    return poids;
}

QColor Arete::setcol(QColor col)
{
    macol=col;
    return macol;
}


void Arete::remove()
{
    source->removeEdge(this);
    dest->removeEdge(this);
    graph->removeItem(this);
    graph->removeEdge(this);
}

void Arete::adjust()
{
    if (!source || !dest)
        return;

    QLineF line(mapFromItem(source, 0, 0), mapFromItem(dest, 0, 0));
    qreal length = line.length();

    prepareGeometryChange();

    if (length > qreal(20.)) {
        QPointF edgeOffset((line.dx() * 10) / length, (line.dy() * 10) / length);
        sourcePoint = line.p1() + edgeOffset;
        destPoint = line.p2() - edgeOffset;
    } else {
        sourcePoint = destPoint = line.p1();
    }
}


QRectF Arete::boundingRect() const
{
    if (!source || !dest)
        return QRectF();

    qreal penWidth = 1;
    qreal extra=(penWidth )*10;

    return QRectF(sourcePoint, QSizeF(destPoint.x() - sourcePoint.x(),
                                      destPoint.y() - sourcePoint.y()))
        .normalized()
        .adjusted(-extra, -extra, extra, extra);
}

std::pair<int, int> Arete::arete() const
{
    return std::make_pair(source->sommet()->getId(),
                          dest->sommet()->getId());
}
void Arete::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *)
{

    if (!source || !dest)
        return;
    painter->setTransform(transform(), true);
    QLineF line(sourcePoint, destPoint);
    if (qFuzzyCompare(line.length(), qreal(0.)))
        return;
    if(coloration==false){
    painter->setPen(QPen(macol, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));}
    if(coloration==true){
    painter->setPen(QPen(Qt::magenta, 3, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));}
    painter->drawLine(line);
   if(poids != 0){
    painter->drawText((sourcePoint+destPoint)/2,QString::number(poids));
    }

}

void Arete::mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event)
{
    if(graph->EraserFun){
        qDebug()<<"delete Arete";
        remove();
    }
    else
        ponderer();

    update();
    QGraphicsItem::mouseDoubleClickEvent(event);
}



