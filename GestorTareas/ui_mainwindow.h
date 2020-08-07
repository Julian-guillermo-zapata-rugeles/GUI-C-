/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QProgressBar *progressBar;
    QPushButton *iniciar1;
    QLabel *label;
    QLabel *label_2;
    QPushButton *iniciar2;
    QProgressBar *progressBar_2;
    QProgressBar *progressBar_3;
    QLabel *label_3;
    QPushButton *iniciar3;
    QPushButton *iniciar4;
    QProgressBar *progressBar_4;
    QLabel *label_4;
    QLabel *label_5;
    QProgressBar *gen;
    QLabel *estado;
    QLabel *actividad;
    QLCDNumber *lcdNumber;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(403, 471);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(112, 103, 171, 27));
        progressBar->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(252, 175, 62);\n"
"font:bold;"));
        progressBar->setMaximum(60);
        progressBar->setValue(0);
        iniciar1 = new QPushButton(centralWidget);
        iniciar1->setObjectName(QString::fromUtf8("iniciar1"));
        iniciar1->setGeometry(QRect(301, 103, 80, 26));
        iniciar1->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Aharoni CLM\";\n"
"font:bold;"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(9, 103, 34, 22));
        label->setStyleSheet(QString::fromUtf8("font:bold;\n"
"font-size:18px;\n"
""));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(9, 136, 97, 22));
        label_2->setStyleSheet(QString::fromUtf8("font:bold;\n"
"font-size:18px;\n"
""));
        iniciar2 = new QPushButton(centralWidget);
        iniciar2->setObjectName(QString::fromUtf8("iniciar2"));
        iniciar2->setGeometry(QRect(301, 136, 80, 26));
        iniciar2->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Aharoni CLM\";\n"
"font:bold;"));
        progressBar_2 = new QProgressBar(centralWidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setGeometry(QRect(112, 136, 171, 27));
        progressBar_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(252, 175, 62);\n"
"font:bold;"));
        progressBar_2->setMaximum(60);
        progressBar_2->setValue(0);
        progressBar_3 = new QProgressBar(centralWidget);
        progressBar_3->setObjectName(QString::fromUtf8("progressBar_3"));
        progressBar_3->setGeometry(QRect(112, 169, 171, 27));
        progressBar_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(252, 175, 62);\n"
"font:bold;"));
        progressBar_3->setMaximum(30);
        progressBar_3->setValue(0);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(9, 169, 84, 22));
        label_3->setStyleSheet(QString::fromUtf8("font:bold;\n"
"font-size:18px;\n"
""));
        iniciar3 = new QPushButton(centralWidget);
        iniciar3->setObjectName(QString::fromUtf8("iniciar3"));
        iniciar3->setGeometry(QRect(301, 169, 80, 26));
        iniciar3->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Aharoni CLM\";\n"
"font:bold;"));
        iniciar4 = new QPushButton(centralWidget);
        iniciar4->setObjectName(QString::fromUtf8("iniciar4"));
        iniciar4->setGeometry(QRect(301, 202, 80, 26));
        iniciar4->setStyleSheet(QString::fromUtf8("background-color: rgb(78, 154, 6);\n"
"color: rgb(255, 255, 255);\n"
"font: 75 11pt \"Aharoni CLM\";\n"
"font:bold;"));
        progressBar_4 = new QProgressBar(centralWidget);
        progressBar_4->setObjectName(QString::fromUtf8("progressBar_4"));
        progressBar_4->setGeometry(QRect(112, 202, 171, 27));
        progressBar_4->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"selection-background-color: rgb(252, 175, 62);\n"
"font:bold;"));
        progressBar_4->setMaximum(30);
        progressBar_4->setValue(0);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(9, 202, 39, 22));
        label_4->setStyleSheet(QString::fromUtf8("font:bold;\n"
"font-size:18px;\n"
""));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(60, 10, 266, 50));
        label_5->setStyleSheet(QString::fromUtf8("font:bold;\n"
"font-size:18px;\n"
"center;"));
        gen = new QProgressBar(centralWidget);
        gen->setObjectName(QString::fromUtf8("gen"));
        gen->setGeometry(QRect(90, 370, 301, 27));
        gen->setStyleSheet(QString::fromUtf8("selection-color: rgb(239, 41, 41);"));
        gen->setMaximum(15);
        gen->setValue(0);
        estado = new QLabel(centralWidget);
        estado->setObjectName(QString::fromUtf8("estado"));
        estado->setGeometry(QRect(300, 70, 53, 19));
        actividad = new QLabel(centralWidget);
        actividad->setObjectName(QString::fromUtf8("actividad"));
        actividad->setGeometry(QRect(300, 260, 91, 21));
        actividad->setStyleSheet(QString::fromUtf8(""));
        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(90, 290, 301, 81));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 290, 71, 111));
        pushButton->setStyleSheet(QString::fromUtf8("border-radius:3px;\n"
"border-color: red;\n"
"background-color:red;\n"
"color:white;\n"
"font:bold;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 403, 24));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        iniciar1->setText(QApplication::translate("MainWindow", "INICIAR", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "C++", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "COURSERA", 0, QApplication::UnicodeUTF8));
        iniciar2->setText(QApplication::translate("MainWindow", "INICIAR", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "ANDROID", 0, QApplication::UnicodeUTF8));
        iniciar3->setText(QApplication::translate("MainWindow", "INICIAR", 0, QApplication::UnicodeUTF8));
        iniciar4->setText(QApplication::translate("MainWindow", "INICIAR", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "POO", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" color:#204a87;\">GESTOR DE ACTIVIDAD DIARIA </span></p><p align=\"center\"><span style=\" font-size:10pt; color:#204a87;\">(3 HORAS)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        estado->setText(QApplication::translate("MainWindow", "Inactivo", 0, QApplication::UnicodeUTF8));
        actividad->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">TOTAL HOY</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "EXIT", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
