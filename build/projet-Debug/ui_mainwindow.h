/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label;
    QTextEdit *Affichage;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Btn2;
    QPushButton *Btn7;
    QPushButton *Btn3;
    QPushButton *BtnPlusouMoin;
    QPushButton *Btn0;
    QPushButton *BtnPoint;
    QPushButton *BtnEfface;
    QPushButton *Btn4;
    QPushButton *Btn1;
    QPushButton *Btn5;
    QPushButton *BtnMult;
    QPushButton *Btn8;
    QPushButton *Btn9;
    QPushButton *BtnBack;
    QPushButton *BtnDivi;
    QPushButton *BtnSom;
    QPushButton *BtnSous;
    QPushButton *Btn6;
    QPushButton *BtnResultat;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 824);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    font-family: \"Segoe UI\", \"Futura\", \"Helvetica Neue\", Arial;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(190, 20, 371, 681));
        frame->setStyleSheet(QString::fromUtf8("QFrame {\n"
"    background: qlineargradient(x1:0, y1:0, x2:1, y2:1,\n"
"        stop:0 rgba(0, 20, 40, 0.8), stop:1 rgba(0, 0, 0, 0.8));\n"
"    border: 2px solid rgba(0, 255, 255, 0.4);\n"
"    border-radius: 12px;\n"
"    box-shadow: 0 0 20px rgba(0, 255, 255, 0.5);\n"
"}\n"
""));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 181, 31));
        Affichage = new QTextEdit(frame);
        Affichage->setObjectName("Affichage");
        Affichage->setGeometry(QRect(20, 60, 331, 51));
        Affichage->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background: transparent;\n"
"    border: none;\n"
"    color: #00f6ff;\n"
"    font-size: 32px;\n"
"    padding: 14px;\n"
"    qproperty-frame: false;\n"
"    selection-background-color: #00baff;\n"
"}"));
        Affichage->setReadOnly(true);
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 170, 321, 482));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(5);
        gridLayout->setVerticalSpacing(25);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Btn2 = new QPushButton(layoutWidget);
        Btn2->setObjectName("Btn2");
        Btn2->setMinimumSize(QSize(76, 76));
        Btn2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn2, 3, 1, 1, 1);

        Btn7 = new QPushButton(layoutWidget);
        Btn7->setObjectName("Btn7");
        Btn7->setMinimumSize(QSize(76, 76));
        Btn7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn7, 1, 0, 1, 1);

        Btn3 = new QPushButton(layoutWidget);
        Btn3->setObjectName("Btn3");
        Btn3->setMinimumSize(QSize(76, 76));
        Btn3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn3, 3, 2, 1, 1);

        BtnPlusouMoin = new QPushButton(layoutWidget);
        BtnPlusouMoin->setObjectName("BtnPlusouMoin");
        BtnPlusouMoin->setMinimumSize(QSize(76, 76));
        BtnPlusouMoin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 #00e0ff, stop:1 #0077ff);\n"
"    border: 1px solid rgba(0,240,255,0.6);\n"
"    color: #001b2b;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnPlusouMoin, 4, 0, 1, 1);

        Btn0 = new QPushButton(layoutWidget);
        Btn0->setObjectName("Btn0");
        Btn0->setMinimumSize(QSize(76, 76));
        Btn0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn0, 4, 1, 1, 1);

        BtnPoint = new QPushButton(layoutWidget);
        BtnPoint->setObjectName("BtnPoint");
        BtnPoint->setMinimumSize(QSize(76, 76));
        BtnPoint->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 #00e0ff, stop:1 #0077ff);\n"
"    border: 1px solid rgba(0,240,255,0.6);\n"
"    color: #001b2b;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnPoint, 4, 2, 1, 1);

        BtnEfface = new QPushButton(layoutWidget);
        BtnEfface->setObjectName("BtnEfface");
        BtnEfface->setMinimumSize(QSize(76, 76));
        BtnEfface->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 #00e0ff, stop:1 #0077ff);\n"
"    border: 1px solid rgba(0,240,255,0.6);\n"
"    color: #001b2b;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnEfface, 0, 0, 1, 1);

        Btn4 = new QPushButton(layoutWidget);
        Btn4->setObjectName("Btn4");
        Btn4->setMinimumSize(QSize(76, 76));
        Btn4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn4, 2, 0, 1, 1);

        Btn1 = new QPushButton(layoutWidget);
        Btn1->setObjectName("Btn1");
        Btn1->setMinimumSize(QSize(76, 76));
        Btn1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn1, 3, 0, 1, 1);

        Btn5 = new QPushButton(layoutWidget);
        Btn5->setObjectName("Btn5");
        Btn5->setMinimumSize(QSize(76, 76));
        Btn5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn5, 2, 1, 1, 1);

        BtnMult = new QPushButton(layoutWidget);
        BtnMult->setObjectName("BtnMult");
        BtnMult->setMinimumSize(QSize(76, 76));
        BtnMult->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: rgba(0,40,60,0.5);\n"
"    color: #6de6ff;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnMult, 2, 3, 1, 1);

        Btn8 = new QPushButton(layoutWidget);
        Btn8->setObjectName("Btn8");
        Btn8->setMinimumSize(QSize(76, 76));
        Btn8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn8, 1, 1, 1, 1);

        Btn9 = new QPushButton(layoutWidget);
        Btn9->setObjectName("Btn9");
        Btn9->setMinimumSize(QSize(76, 76));
        Btn9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn9, 1, 2, 1, 1);

        BtnBack = new QPushButton(layoutWidget);
        BtnBack->setObjectName("BtnBack");
        BtnBack->setMinimumSize(QSize(76, 76));
        BtnBack->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 #00e0ff, stop:1 #0077ff);\n"
"    border: 1px solid rgba(0,240,255,0.6);\n"
"    color: #001b2b;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnBack, 0, 1, 1, 2);

        BtnDivi = new QPushButton(layoutWidget);
        BtnDivi->setObjectName("BtnDivi");
        BtnDivi->setMinimumSize(QSize(76, 76));
        BtnDivi->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: rgba(0,40,60,0.5);\n"
"    color: #6de6ff;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnDivi, 0, 3, 1, 1);

        BtnSom = new QPushButton(layoutWidget);
        BtnSom->setObjectName("BtnSom");
        BtnSom->setMinimumSize(QSize(76, 76));
        BtnSom->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: rgba(0,40,60,0.5);\n"
"    color: #6de6ff;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnSom, 1, 3, 1, 1);

        BtnSous = new QPushButton(layoutWidget);
        BtnSous->setObjectName("BtnSous");
        BtnSous->setMinimumSize(QSize(76, 76));
        BtnSous->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: rgba(0,40,60,0.5);\n"
"    color: #6de6ff;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnSous, 3, 3, 1, 1);

        Btn6 = new QPushButton(layoutWidget);
        Btn6->setObjectName("Btn6");
        Btn6->setMinimumSize(QSize(76, 76));
        Btn6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(20,20,40,0.95), stop:1 rgba(5,5,20,0.95));\n"
"    color: #bcecff;\n"
"    border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"\n"
"/* === Effets au survol et au clic === */\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(Btn6, 2, 2, 1, 1);

        BtnResultat = new QPushButton(layoutWidget);
        BtnResultat->setObjectName("BtnResultat");
        BtnResultat->setMinimumSize(QSize(76, 76));
        BtnResultat->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 #00e0ff, stop:1 #0077ff);\n"
"    border: 1px solid rgba(0,240,255,0.6);\n"
"    color: #001b2b;\n"
"    font-weight: bold;\n"
"border: 1px solid rgba(0,240,255,0.15);\n"
"    border-radius: 10px;\n"
"    min-width: 58px;\n"
"    min-height: 58px;\n"
"    font-size: 18px;\n"
"    font-weight: 500;\n"
"    padding: 8px;\n"
"}\n"
"QPushButton:hover {\n"
"    border: 1px solid rgba(0,240,255,0.45);\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background: qlineargradient(x1:0,y1:0,x2:0,y2:1,\n"
"        stop:0 rgba(0,30,60,0.9), stop:1 rgba(0,20,40,0.9));\n"
"    color: #00f0ff;\n"
"}"));

        gridLayout->addWidget(BtnResultat, 4, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Calculatrice Standard", nullptr));
        Btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        Btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        BtnPlusouMoin->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        Btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        BtnPoint->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        BtnEfface->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        Btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        Btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        Btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        BtnMult->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        Btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        Btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        BtnBack->setText(QCoreApplication::translate("MainWindow", "<-", nullptr));
        BtnDivi->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        BtnSom->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        BtnSous->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        Btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        BtnResultat->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
