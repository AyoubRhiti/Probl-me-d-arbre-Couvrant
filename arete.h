#ifndef ARETE_H
#define ARETE_H

#include <QGraphicsItem>
#include <QInputDialog>

class Sommet;
class Graphe;

class QGraphicsLineItem;
class QGraphicsScene;
class QRectF;
class QGraphicsSceneMouseEvent;
class QPainterPath;

class Arete : public QGraphicsItem
{
public:

    Arete(Sommet *sourceNode, Sommet *destNode,Graphe *graphe );//,bool rand);
    Sommet *sourceNode() const;
    Sommet *destNode() const;
    void remove();
    void adjust();
    double ponderer();
    double poids;
    int getpoids();
    QColor setcol(QColor col);
    bool ok=false;
    std::pair<int, int> arete() const;
    bool coloration;
protected:

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override;

private:
    Sommet *source, *dest;
    Graphe *graph;
    QPointF sourcePoint;
    QPointF destPoint;
    qreal arrowSize;
    QPainterPath myPath;
    QColor macol;

};


#endif // ARETE_H
