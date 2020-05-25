#ifndef GRAPHE_H
#define GRAPHE_H

#include <QGraphicsView>

class Algo;
class Sommet;
class Arete;
class MainWindow;
class Graphe : public QGraphicsView
{
    Q_OBJECT

public:
    Graphe(MainWindow *parent,qreal w, qreal h);
    Graphe(int V);
    //ajouter un sommet
    void addNode(qreal sommet_id,qreal x,qreal y);
    void removeNode(qreal sommet_id);
    //ajouter une arete
    void setNodeToAddEdge(Sommet *sommet,int no);
    void addEdge(Sommet *sommet1,Sommet *sommet);
    void addEdge();
    //supprimer des sommmets/Aretes
    void removeItem(QGraphicsItem * item);
    //selectionner un sommet
    void select(Sommet* sommet);
    //recuperer le  sommet
    //Sommet *getNode() const;
     Sommet *getNode(qreal sommet_id) ;
    void setNode(Sommet *value);
    //list d'adjacence
    QPair<Sommet *, QList<Sommet *> > getlistdadja(Sommet *sommetx);
    void removeEdge(Arete *edge);
    bool selectFun=false;
    bool addEdgeFun=false;
    bool addNodeFun=false;
    bool EraserFun=false;
    bool color=false;
    void setSceneRect(qreal w, qreal h);
    void save(const QString &fileName);
    void open(const QString &fileName);
    void generateur(int som , int are );
    void reset();
    inline int getNodeNum() const { return this->sommets.size(); }
     QList<Sommet*> sommets;
     QList<Arete*> aretes;
     Algo *monalgo;
     // connexe
     bool connexe();
     bool checkcon(Sommet* som1,Sommet* som2);
     //algo kruskal
     static bool sortt(Arete* are1,Arete* are2);
     int find(int r);
     QList<Arete *> kruskal_mst();
     void colo();
     int display();
     //dijkstra
     int minDistance(std::vector<int> &dist, std::vector<bool> &sptSet);
          std::vector<int> dijkstraall(int start);
          QList<int> dijkstraone(int start, int goal);
          bool hasthisedge(int a,int b);
          int getedgepoids(int a,int b);
          Arete* getarete(int a);
          Arete* getaretesd(int a,int b);
      void reseau(QList<Sommet *> term);
       QList<Sommet *> termoblig;
       QList<Sommet *> fcttermoblig();
            //Dijkstra
                 typedef std::pair<int, Sommet *> iPair;
                 // number of vertices
                     int SIZE;
                 // infinity
                     int oo = ((1LL<<31)-1);
                     QList<Sommet *> dijkstra(Sommet * source, Sommet * goal);
                     QList<Sommet *> findAdj(Sommet *);
            bool hasthisedge(Sommet * a,Sommet * b);
            int getedgepoids(Sommet * a,Sommet * b);
            Sommet * GetSomById(int id);
            Arete * GetArete(Sommet *, Sommet *);
            bool areteExist(int a , int b);

public slots:
    void selectSlot(bool b);
    void addNodeSlot(bool b);
    void addEdgeSlot(bool b);
    void eraserSlot(bool b);

protected:

    void mousePressEvent(QMouseEvent *event) override;
    void scaleView(qreal scaleFactor);

private:

    MainWindow *window;
    QGraphicsScene *scene;
    Sommet *sommet;
    Sommet *sommet1;
    Sommet *sommet2;
    //QList<Sommet *> sommetrd;
    //QList<Arete*> areterd;
    Arete *arete ;
    QList <int> som_id;

    std::list<int> *adj;
    int parent[10000];
    std::vector<int> parentv;

};

#endif // GRAPHE_H
