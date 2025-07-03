/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *Buttons_Panel;
    QPushButton *AC;
    QPushButton *div;
    QPushButton *percent;
    QPushButton *num5;
    QPushButton *num4;
    QPushButton *num8;
    QPushButton *num1;
    QPushButton *num7;
    QPushButton *Delete;
    QPushButton *promo;
    QPushButton *num2;
    QPushButton *num9;
    QPushButton *mult;
    QPushButton *num6;
    QPushButton *minus;
    QPushButton *num3;
    QPushButton *plus;
    QPushButton *num0;
    QPushButton *decimal;
    QPushButton *equals;
    QLabel *Answer;
    QStatusBar *statusbar;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color: #000000;\n"
"    color: white;\n"
"    border: 2px solid #555;\n"
"    border-radius: 20px; \n"
"    padding: 10px;\n"
"    min-width: 40px;\n"
"    min-height: 40px;  \n"
"	font: 9pt \"Cascadia Code\";\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: #222;\n"
"    box-shadow: inset 2px 2px 5px #333,\n"
"                inset -2px -2px 5px #888;\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        Buttons_Panel = new QGridLayout();
        Buttons_Panel->setObjectName("Buttons_Panel");
        AC = new QPushButton(centralwidget);
        AC->setObjectName("AC");

        Buttons_Panel->addWidget(AC, 0, 0, 1, 1);

        div = new QPushButton(centralwidget);
        div->setObjectName("div");

        Buttons_Panel->addWidget(div, 0, 3, 1, 1);

        percent = new QPushButton(centralwidget);
        percent->setObjectName("percent");

        Buttons_Panel->addWidget(percent, 0, 2, 1, 1);

        num5 = new QPushButton(centralwidget);
        num5->setObjectName("num5");

        Buttons_Panel->addWidget(num5, 2, 1, 1, 1);

        num4 = new QPushButton(centralwidget);
        num4->setObjectName("num4");

        Buttons_Panel->addWidget(num4, 2, 0, 1, 1);

        num8 = new QPushButton(centralwidget);
        num8->setObjectName("num8");

        Buttons_Panel->addWidget(num8, 1, 1, 1, 1);

        num1 = new QPushButton(centralwidget);
        num1->setObjectName("num1");

        Buttons_Panel->addWidget(num1, 3, 0, 1, 1);

        num7 = new QPushButton(centralwidget);
        num7->setObjectName("num7");

        Buttons_Panel->addWidget(num7, 1, 0, 1, 1);

        Delete = new QPushButton(centralwidget);
        Delete->setObjectName("Delete");

        Buttons_Panel->addWidget(Delete, 0, 1, 1, 1);

        promo = new QPushButton(centralwidget);
        promo->setObjectName("promo");

        Buttons_Panel->addWidget(promo, 4, 0, 1, 1);

        num2 = new QPushButton(centralwidget);
        num2->setObjectName("num2");

        Buttons_Panel->addWidget(num2, 3, 1, 1, 1);

        num9 = new QPushButton(centralwidget);
        num9->setObjectName("num9");

        Buttons_Panel->addWidget(num9, 1, 2, 1, 1);

        mult = new QPushButton(centralwidget);
        mult->setObjectName("mult");

        Buttons_Panel->addWidget(mult, 1, 3, 1, 1);

        num6 = new QPushButton(centralwidget);
        num6->setObjectName("num6");

        Buttons_Panel->addWidget(num6, 2, 2, 1, 1);

        minus = new QPushButton(centralwidget);
        minus->setObjectName("minus");

        Buttons_Panel->addWidget(minus, 2, 3, 1, 1);

        num3 = new QPushButton(centralwidget);
        num3->setObjectName("num3");

        Buttons_Panel->addWidget(num3, 3, 2, 1, 1);

        plus = new QPushButton(centralwidget);
        plus->setObjectName("plus");

        Buttons_Panel->addWidget(plus, 3, 3, 1, 1);

        num0 = new QPushButton(centralwidget);
        num0->setObjectName("num0");

        Buttons_Panel->addWidget(num0, 4, 1, 1, 1);

        decimal = new QPushButton(centralwidget);
        decimal->setObjectName("decimal");

        Buttons_Panel->addWidget(decimal, 4, 2, 1, 1);

        equals = new QPushButton(centralwidget);
        equals->setObjectName("equals");

        Buttons_Panel->addWidget(equals, 4, 3, 1, 1);


        horizontalLayout->addLayout(Buttons_Panel);

        Answer = new QLabel(centralwidget);
        Answer->setObjectName("Answer");
        Answer->setStyleSheet(QString::fromUtf8("QLabel {\n"
"    background-color: qlineargradient(\n"
"        x1:0, y1:0, x2:0, y2:1,\n"
"        stop:0 #1a1a1a,\n"
"        stop:0.5 #0f0f0f,\n"
"        stop:1 #1a1a1a\n"
"    );\n"
"    color: #00fff7;\n"
"    border: 1px solid #00fff7;\n"
"    border-radius: 8px;\n"
"    padding: 8px 12px;\n"
"\n"
"    font-family: \"Segoe UI\", \"Roboto\", \"Helvetica Neue\", sans-serif;\n"
"    font-size: 16px;\n"
"    font-weight: bold;\n"
"    letter-spacing: 1px;\n"
"}\n"
""));
        Answer->setAlignment(Qt::AlignmentFlag::AlignCenter);

        horizontalLayout->addWidget(Answer);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        QFont font;
        font.setPointSize(20);
        statusbar->setFont(font);
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        AC->setText(QCoreApplication::translate("MainWindow", "AC", nullptr));
        div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        percent->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        Delete->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        promo->setText(QCoreApplication::translate("MainWindow", "github/Apurv7Gupta", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        mult->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        num0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        decimal->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        equals->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        Answer->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
