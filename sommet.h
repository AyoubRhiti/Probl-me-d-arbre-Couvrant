#ifndef Sommet_H
#define Sommet_H

#include <QGraphicsItem>
#include <QList>


QT_BEGIN_NAMESPACE
class Arete;
class Graphe;
class QGraphicsSceneMouseEvent;
QT_END_NAMESPACE

class Sommet : public QGraphicsItem
{
public:
    Sommet(Graphe *graphe,qreal id);

    void addEdge(Arete *arete);
    void removeEdge(Arete *arete);
    QList<Arete *> Aretes() const;

    void click();
    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    qreal getPenWidth() const;
    void setPenWidth(const qreal &value);
    int getId() const { return this->id; }
    void setId(int id) { this->id = id; }
    Sommet* sommet() const;
    void setEuclidePos(QPointF pos) { this->euclide_pos = pos; }
    bool graphconnexe;
    bool ter=false;
    void mouseDoubleClickEvent(QGraphicsSceneMouseEvent *event) override;
   QList<Sommet *> nodoblig;



protected:
    QVariant itemChange(GraphicsItemChange change, const QVariant &value) override;
    void mousePressEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event) override;
    void hoverEnterEvent(QGraphicsSceneHoverEvent *event) override;

private:
    QList<Arete *> areteList;
    Graphe *graph;
    qreal num;
    qreal penWidth;
    Sommet* somm;
    Graphe *scene;
    bool highlight;
    bool dance;
    int id;
    QPointF euclide_pos;


};

#endif // Sommet_H
