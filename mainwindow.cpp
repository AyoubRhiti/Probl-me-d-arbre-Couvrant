#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "sommet.h"
#include "arete.h"
#include "graphe.h"

#include <QToolBar>
#include <QDebug>
#include <QFileDialog>
#include <QFile>
#include <QPushButton>
#include <QTextEdit>
#include <iostream>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    widget = new Graphe(this,1024,512);
    ui->setupUi(this);
    setWindowTitle("ArbreC");
    ui->graphLayout->addWidget(widget);
    /*ui->open->setIcon(QIcon(":/open.jpeg"));
    ui->save->setIcon(QIcon(":/save.jpeg"));
    ui->actionExit->setIcon(QIcon::fromTheme("list-add" ,QIcon(":/exit.jpeg")));*/


}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::getsom(){
    return ui->som->value();
}
int MainWindow::getare(){
    return ui->are->value();
}

void MainWindow::colo()
{
    QList<Arete*> temcolo=widget->kruskal_mst();
    for(int i=0;i<temcolo.size();i++){
        temcolo[i]->coloration=true;
    }
    update();
}

/*void MainWindow::colo1()
{
    int start=QInputDialog::getInt(this,tr("input"),tr("Entrer le sommet source"));
    int goal=QInputDialog::getInt(this,tr("input"),tr("Entrer le sommet destination"));
    this->start=start;
    this->goal=goal;
   // QList<int> temcolo=widget->dijkstraone(start,goal);
    QList<Arete*> temcolo2;
    for (int j=0;j<temcolo.size()-1;j++){
        int source =temcolo[j];
        int destination=temcolo[j+1];
         temcolo2.append(widget->getaretesd(source,destination));

    }
    for(int i=0;i<temcolo2.size();i++){
        temcolo2[i]->coloration=true;
    }
    update();

}*/

void MainWindow::on_open_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,"","",tr("Graph (*.graph)"));
    widget->open(fileName);
}

void MainWindow::on_save_triggered()
{
    QString fileName = QFileDialog::getSaveFileName(this,"","",tr("Graph (*.graph)"));
    widget->save(fileName);

}





void MainWindow::on_pushButton_2_clicked()
{
    widget->Graphe::addNodeSlot(true);
    widget->Graphe::addEdgeSlot(false);
    widget->Graphe::eraserSlot(false);
    widget->Graphe::selectSlot(false);
     widget->color=false;
}

void MainWindow::on_pushButton_3_clicked()
{
    widget->Graphe::addNodeSlot(false);
    widget->Graphe::addEdgeSlot(true);
    widget->Graphe::eraserSlot(false);
    widget->Graphe::selectSlot(false);
     widget->color=false;
}

void MainWindow::on_pushButton_clicked()
{
    widget->Graphe::addNodeSlot(false);
    widget->Graphe::addEdgeSlot(false);
    widget->Graphe::eraserSlot(true);
    widget->Graphe::selectSlot(false);
     widget->color=false;
}

void MainWindow::on_pushButton_4_clicked()
{
    widget->Graphe::addNodeSlot(false);
    widget->Graphe::addEdgeSlot(false);
    widget->Graphe::eraserSlot(false);
    widget->Graphe::selectSlot(true);
     widget->color=false;
}

void MainWindow::on_Generate_clicked()
{
    int som=getsom();
    int are=getare();
    widget->generateur(som,are);
}

void MainWindow::on_reset_clicked()
{
    widget->reset();

}


void MainWindow::on_pushButton_7_clicked()
{
    ui->textEdit->clear();
    if (widget->connexe()==false){
    QMessageBox::information(this, "Erreur", "L’arbre couvrant de poids minimal introuvable car votre graphe n'est pas connexe.") ;
    }

    else {
        this->colo();
        int f= widget->display();
        QList<Arete*> tem=widget->kruskal_mst();
        for (int k=0;k<tem.size();k++){
            std::cout<< tem[k]->sourceNode()->getId() <<"-"<< tem[k]->destNode()->getId()<<":"<<tem[k]->getpoids()<<std::endl;
            ui->textEdit->insertPlainText(QString::number(tem[k]->sourceNode()->getId()));
            ui->textEdit->insertPlainText("-");
            ui->textEdit->insertPlainText(QString::number(tem[k]->destNode()->getId()));
            ui->textEdit->insertPlainText(":");
            ui->textEdit->insertPlainText(QString::number(tem[k]->getpoids()));
            ui->textEdit->insertPlainText("\n");
        }
        ui->textEdit->insertPlainText("le poids minimal est ");
        ui->textEdit->insertPlainText(QString::number(f));
    }
}


/*void MainWindow::on_pushButton_8_clicked()
{
    ui->textEdit->clear();
    if (widget->connexe()==false){
    QMessageBox::information(this, "Erreur", "L’arbre couvrant de poids minimal introuvable car votre graphe n'est pas connexe.") ;
    }

    else {
        this->colo1();
        QList<int> temcolo=widget->dijkstraone(start,goal);
        QList<Arete*> temcolo2;
        for (int j=0;j<temcolo.size()-1;j++){
            int source =temcolo[j];
            int destination=temcolo[j+1];
             temcolo2.append(widget->getaretesd(source,destination));

        }
        int f=0;
        for (int k=0;k<temcolo2.size();k++){
            std::cout<< temcolo2[k]->sourceNode()->getId() <<"-"<< temcolo2[k]->destNode()->getId()<<":"<<temcolo2[k]->getpoids()<<std::endl;
            ui->textEdit->insertPlainText(QString::number(temcolo2[k]->sourceNode()->getId()));
            ui->textEdit->insertPlainText("-");
            ui->textEdit->insertPlainText(QString::number(temcolo2[k]->destNode()->getId()));
            ui->textEdit->insertPlainText(":");
            ui->textEdit->insertPlainText(QString::number(temcolo2[k]->getpoids()));
            ui->textEdit->insertPlainText("\n");
            f=f+temcolo2[k]->getpoids();
        }
        ui->textEdit->insertPlainText("le cout de plus court chemin est ");
        ui->textEdit->insertPlainText(QString::number(f));

    }
}*/

void MainWindow::on_pushButton_5_clicked()
{
    widget->Graphe::addNodeSlot(false);
    widget->Graphe::addEdgeSlot(false);
    widget->Graphe::eraserSlot(false);
    widget->Graphe::selectSlot(false);
   widget->color=true;
   qInfo()<<widget->color;
}

void MainWindow::on_pushButton_9_clicked()
{
    //widget->Graphe::reseau(widget->Graphe::fcttermoblig());
    int start=QInputDialog::getInt(this,tr("input"),tr("Entrer le sommet source"));
    int goal=QInputDialog::getInt(this,tr("input"),tr("Entrer le sommet destination"));
    QList<Sommet*> djisk;
    djisk=widget->Graphe::dijkstra(widget->Graphe::getNode(start),widget->Graphe::getNode(goal));
    for(int i=0;i<djisk.size();i++){
        qInfo()<<"shortest path sommet numero "<<i<<" son id est "<<djisk[i]->getId();
    }
}

/*void MainWindow::on_pushButton_10_clicked()
{
    widget->Graphe::removeNode(getId())
}*/
