/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open;
    QAction *save;
    QAction *actionExit;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QWidget *working_widget;
    QHBoxLayout *horizontalLayout_9;
    QWidget *utils;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QVBoxLayout *button_layout;
    QVBoxLayout *verticalLayout_2;
    QWidget *verticalWidget_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QFrame *pushButton_6;
    QVBoxLayout *verticalLayout_5;
    QWidget *verticalWidget_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *som;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpinBox *are;
    QPushButton *Generate;
    QPushButton *reset;
    QLabel *label_6;
    QPushButton *pushButton_9;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer;
    QWidget *graphLayout_2;
    QVBoxLayout *graphLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1024, 768);
        MainWindow->setMinimumSize(QSize(720, 540));
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        MainWindow->setStyleSheet(QString::fromUtf8("selection-color: rgb(255, 255, 255);"));
        open = new QAction(MainWindow);
        open->setObjectName(QString::fromUtf8("open"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        open->setIcon(icon);
        open->setIconVisibleInMenu(true);
        save = new QAction(MainWindow);
        save->setObjectName(QString::fromUtf8("save"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        save->setIcon(icon1);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setEnabled(true);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon2);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(51, 0, 77);"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        working_widget = new QWidget(centralWidget);
        working_widget->setObjectName(QString::fromUtf8("working_widget"));
        working_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        horizontalLayout_9 = new QHBoxLayout(working_widget);
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        utils = new QWidget(working_widget);
        utils->setObjectName(QString::fromUtf8("utils"));
        utils->setMaximumSize(QSize(270, 16777215));
        verticalLayout = new QVBoxLayout(utils);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(utils);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        button_layout = new QVBoxLayout(widget);
        button_layout->setSpacing(6);
        button_layout->setContentsMargins(11, 11, 11, 11);
        button_layout->setObjectName(QString::fromUtf8("button_layout"));
        button_layout->setSizeConstraint(QLayout::SetMinimumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalWidget_2 = new QWidget(widget);
        verticalWidget_2->setObjectName(QString::fromUtf8("verticalWidget_2"));
        verticalWidget_2->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(verticalWidget_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_4 = new QLabel(verticalWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_3->addWidget(label_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(-1, 0, -1, -1);
        pushButton_2 = new QPushButton(verticalWidget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(true);
        pushButton_2->setMinimumSize(QSize(0, 20));
        pushButton_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));
        pushButton_2->setAutoDefault(false);

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_4 = new QPushButton(verticalWidget_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(0, 20));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        horizontalLayout_2->addWidget(pushButton_4);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayout_5->setContentsMargins(-1, 0, -1, -1);
        pushButton = new QPushButton(verticalWidget_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMinimumSize(QSize(0, 20));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        horizontalLayout_5->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalWidget_2);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(0, 20));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        horizontalLayout_5->addWidget(pushButton_3);


        verticalLayout_3->addLayout(horizontalLayout_5);


        verticalLayout_2->addWidget(verticalWidget_2);


        button_layout->addLayout(verticalLayout_2);

        pushButton_6 = new QFrame(widget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setFrameShape(QFrame::HLine);
        pushButton_6->setFrameShadow(QFrame::Sunken);

        button_layout->addWidget(pushButton_6);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalWidget_3 = new QWidget(widget);
        verticalWidget_3->setObjectName(QString::fromUtf8("verticalWidget_3"));
        verticalWidget_3->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(verticalWidget_3);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_5 = new QLabel(verticalWidget_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        verticalLayout_4->addWidget(label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(verticalWidget_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_3);

        som = new QSpinBox(verticalWidget_3);
        som->setObjectName(QString::fromUtf8("som"));
        som->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(som);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(verticalWidget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(label_2);

        are = new QSpinBox(verticalWidget_3);
        are->setObjectName(QString::fromUtf8("are"));
        are->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        horizontalLayout_4->addWidget(are);


        verticalLayout_4->addLayout(horizontalLayout_4);

        Generate = new QPushButton(verticalWidget_3);
        Generate->setObjectName(QString::fromUtf8("Generate"));
        Generate->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        verticalLayout_4->addWidget(Generate);

        reset = new QPushButton(verticalWidget_3);
        reset->setObjectName(QString::fromUtf8("reset"));
        reset->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        verticalLayout_4->addWidget(reset);


        verticalLayout_5->addWidget(verticalWidget_3);


        button_layout->addLayout(verticalLayout_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        button_layout->addWidget(label_6);

        pushButton_9 = new QPushButton(widget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 127);\n"
"color: rgb(255, 255, 255);"));

        button_layout->addWidget(pushButton_9);

        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        button_layout->addWidget(pushButton_5);

        pushButton_7 = new QPushButton(widget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        button_layout->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(255, 0, 127);"));

        button_layout->addWidget(pushButton_8);

        textEdit = new QTextEdit(widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->viewport()->setProperty("cursor", QVariant(QCursor(Qt::IBeamCursor)));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        textEdit->setReadOnly(true);

        button_layout->addWidget(textEdit);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        button_layout->addItem(verticalSpacer);


        verticalLayout->addWidget(widget);


        horizontalLayout_9->addWidget(utils);

        graphLayout_2 = new QWidget(working_widget);
        graphLayout_2->setObjectName(QString::fromUtf8("graphLayout_2"));
        graphLayout_2->setStyleSheet(QString::fromUtf8(""));
        graphLayout = new QVBoxLayout(graphLayout_2);
        graphLayout->setSpacing(6);
        graphLayout->setContentsMargins(11, 11, 11, 11);
        graphLayout->setObjectName(QString::fromUtf8("graphLayout"));
        graphLayout->setContentsMargins(6, -1, -1, -1);

        horizontalLayout_9->addWidget(graphLayout_2);


        horizontalLayout->addWidget(working_widget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1024, 21));
        menuBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        menuBar->setDefaultUp(false);
        menuBar->setNativeMenuBar(true);
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuFile->setTearOffEnabled(false);
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(open);
        menuFile->addAction(save);
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        open->setText(QCoreApplication::translate("MainWindow", "&Open Graph", nullptr));
#if QT_CONFIG(shortcut)
        open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        save->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        save->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("MainWindow", "Alt+X", nullptr));
#endif // QT_CONFIG(shortcut)
        label_4->setText(QCoreApplication::translate("MainWindow", "Construction manuelle :", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Add Node", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Select", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Remove Item ", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Add Edge", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Contruction Al\303\251atoire :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "           Node", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "              Edge", nullptr));
        Generate->setText(QCoreApplication::translate("MainWindow", "Generate", nullptr));
        reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Algorithmes :", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "colo", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "Kruskal", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Grasp", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
