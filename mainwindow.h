
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QToolButton>

namespace Ui {
class MainWindow;
}
class Graphe;
class Sommet;
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void setNodeAttr(Sommet* sommet);
    friend class Graphe;
    int getsom();
    int getare();
    bool generateurOk();
    void colo();
    void colo1();
private slots:

    void on_open_triggered();

    void on_save_triggered();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_Generate_clicked();

    void on_reset_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

private:
    Ui::MainWindow *ui;
    Graphe *widget;
    int start;
       int goal;
};

#endif // MAINWINDOW_H
