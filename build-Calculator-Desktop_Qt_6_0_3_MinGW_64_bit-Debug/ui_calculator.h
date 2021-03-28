/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Calculator
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *Button_memSubtract;
    QPushButton *Button_memAdd;
    QPushButton *Button_add;
    QPushButton *Button2;
    QPushButton *Button3;
    QPushButton *Button0;
    QPushButton *Button4;
    QPushButton *Button_equals;
    QPushButton *Button5;
    QPushButton *Button6;
    QPushButton *Button_multiply;
    QPushButton *Button_subtract;
    QLineEdit *Display;
    QPushButton *Button_changeSign;
    QPushButton *Button_divide;
    QPushButton *Button_clear;
    QPushButton *Button9;
    QPushButton *Button1;
    QPushButton *Button_memGet;
    QPushButton *Button8;
    QPushButton *Button7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Calculator)
    {
        if (Calculator->objectName().isEmpty())
            Calculator->setObjectName(QString::fromUtf8("Calculator"));
        Calculator->resize(470, 161);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Calculator->sizePolicy().hasHeightForWidth());
        Calculator->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Calculator);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        Button_memSubtract = new QPushButton(centralwidget);
        Button_memSubtract->setObjectName(QString::fromUtf8("Button_memSubtract"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(Button_memSubtract->sizePolicy().hasHeightForWidth());
        Button_memSubtract->setSizePolicy(sizePolicy1);
        Button_memSubtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_memSubtract, 2, 4, 1, 1);

        Button_memAdd = new QPushButton(centralwidget);
        Button_memAdd->setObjectName(QString::fromUtf8("Button_memAdd"));
        sizePolicy1.setHeightForWidth(Button_memAdd->sizePolicy().hasHeightForWidth());
        Button_memAdd->setSizePolicy(sizePolicy1);
        Button_memAdd->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_memAdd, 1, 4, 1, 1);

        Button_add = new QPushButton(centralwidget);
        Button_add->setObjectName(QString::fromUtf8("Button_add"));
        sizePolicy1.setHeightForWidth(Button_add->sizePolicy().hasHeightForWidth());
        Button_add->setSizePolicy(sizePolicy1);
        Button_add->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_add, 3, 3, 1, 1);

        Button2 = new QPushButton(centralwidget);
        Button2->setObjectName(QString::fromUtf8("Button2"));
        sizePolicy1.setHeightForWidth(Button2->sizePolicy().hasHeightForWidth());
        Button2->setSizePolicy(sizePolicy1);
        Button2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button2, 3, 1, 1, 1);

        Button3 = new QPushButton(centralwidget);
        Button3->setObjectName(QString::fromUtf8("Button3"));
        sizePolicy1.setHeightForWidth(Button3->sizePolicy().hasHeightForWidth());
        Button3->setSizePolicy(sizePolicy1);
        Button3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button3, 3, 2, 1, 1);

        Button0 = new QPushButton(centralwidget);
        Button0->setObjectName(QString::fromUtf8("Button0"));
        sizePolicy1.setHeightForWidth(Button0->sizePolicy().hasHeightForWidth());
        Button0->setSizePolicy(sizePolicy1);
        Button0->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button0, 4, 1, 1, 1);

        Button4 = new QPushButton(centralwidget);
        Button4->setObjectName(QString::fromUtf8("Button4"));
        sizePolicy1.setHeightForWidth(Button4->sizePolicy().hasHeightForWidth());
        Button4->setSizePolicy(sizePolicy1);
        Button4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button4, 2, 0, 1, 1);

        Button_equals = new QPushButton(centralwidget);
        Button_equals->setObjectName(QString::fromUtf8("Button_equals"));
        sizePolicy1.setHeightForWidth(Button_equals->sizePolicy().hasHeightForWidth());
        Button_equals->setSizePolicy(sizePolicy1);
        Button_equals->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_equals, 4, 4, 1, 1);

        Button5 = new QPushButton(centralwidget);
        Button5->setObjectName(QString::fromUtf8("Button5"));
        sizePolicy1.setHeightForWidth(Button5->sizePolicy().hasHeightForWidth());
        Button5->setSizePolicy(sizePolicy1);
        Button5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button5, 2, 1, 1, 1);

        Button6 = new QPushButton(centralwidget);
        Button6->setObjectName(QString::fromUtf8("Button6"));
        sizePolicy1.setHeightForWidth(Button6->sizePolicy().hasHeightForWidth());
        Button6->setSizePolicy(sizePolicy1);
        Button6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button6, 2, 2, 1, 1);

        Button_multiply = new QPushButton(centralwidget);
        Button_multiply->setObjectName(QString::fromUtf8("Button_multiply"));
        sizePolicy1.setHeightForWidth(Button_multiply->sizePolicy().hasHeightForWidth());
        Button_multiply->setSizePolicy(sizePolicy1);
        Button_multiply->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_multiply, 2, 3, 1, 1);

        Button_subtract = new QPushButton(centralwidget);
        Button_subtract->setObjectName(QString::fromUtf8("Button_subtract"));
        sizePolicy1.setHeightForWidth(Button_subtract->sizePolicy().hasHeightForWidth());
        Button_subtract->setSizePolicy(sizePolicy1);
        Button_subtract->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_subtract, 4, 3, 1, 1);

        Display = new QLineEdit(centralwidget);
        Display->setObjectName(QString::fromUtf8("Display"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Display->sizePolicy().hasHeightForWidth());
        Display->setSizePolicy(sizePolicy2);
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        Display->setFont(font);
        Display->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"	background-color: gray;\n"
"	border: 1px solid gray;\n"
"	color: #ffffff;\n"
"}"));
        Display->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(Display, 0, 0, 1, 5);

        Button_changeSign = new QPushButton(centralwidget);
        Button_changeSign->setObjectName(QString::fromUtf8("Button_changeSign"));
        sizePolicy1.setHeightForWidth(Button_changeSign->sizePolicy().hasHeightForWidth());
        Button_changeSign->setSizePolicy(sizePolicy1);
        Button_changeSign->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_changeSign, 4, 2, 1, 1);

        Button_divide = new QPushButton(centralwidget);
        Button_divide->setObjectName(QString::fromUtf8("Button_divide"));
        sizePolicy1.setHeightForWidth(Button_divide->sizePolicy().hasHeightForWidth());
        Button_divide->setSizePolicy(sizePolicy1);
        Button_divide->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_divide, 1, 3, 1, 1);

        Button_clear = new QPushButton(centralwidget);
        Button_clear->setObjectName(QString::fromUtf8("Button_clear"));
        sizePolicy1.setHeightForWidth(Button_clear->sizePolicy().hasHeightForWidth());
        Button_clear->setSizePolicy(sizePolicy1);
        Button_clear->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_clear, 4, 0, 1, 1);

        Button9 = new QPushButton(centralwidget);
        Button9->setObjectName(QString::fromUtf8("Button9"));
        sizePolicy1.setHeightForWidth(Button9->sizePolicy().hasHeightForWidth());
        Button9->setSizePolicy(sizePolicy1);
        Button9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button9, 1, 2, 1, 1);

        Button1 = new QPushButton(centralwidget);
        Button1->setObjectName(QString::fromUtf8("Button1"));
        sizePolicy1.setHeightForWidth(Button1->sizePolicy().hasHeightForWidth());
        Button1->setSizePolicy(sizePolicy1);
        Button1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button1, 3, 0, 1, 1);

        Button_memGet = new QPushButton(centralwidget);
        Button_memGet->setObjectName(QString::fromUtf8("Button_memGet"));
        sizePolicy1.setHeightForWidth(Button_memGet->sizePolicy().hasHeightForWidth());
        Button_memGet->setSizePolicy(sizePolicy1);
        Button_memGet->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #FF8C00;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button_memGet, 3, 4, 1, 1);

        Button8 = new QPushButton(centralwidget);
        Button8->setObjectName(QString::fromUtf8("Button8"));
        sizePolicy1.setHeightForWidth(Button8->sizePolicy().hasHeightForWidth());
        Button8->setSizePolicy(sizePolicy1);
        Button8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button8, 1, 1, 1, 1);

        Button7 = new QPushButton(centralwidget);
        Button7->setObjectName(QString::fromUtf8("Button7"));
        sizePolicy1.setHeightForWidth(Button7->sizePolicy().hasHeightForWidth());
        Button7->setSizePolicy(sizePolicy1);
        Button7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: #C0C0C0;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}\n"
"\n"
"QPushButton::pressed {\n"
"	background-color: #A9A9A9;\n"
"	border: 1px solid gray;\n"
"	padding: 5px;\n"
"}"));

        gridLayout->addWidget(Button7, 1, 0, 1, 1);

        Calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Calculator);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 470, 21));
        Calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(Calculator);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Calculator->setStatusBar(statusbar);

        retranslateUi(Calculator);

        QMetaObject::connectSlotsByName(Calculator);
    } // setupUi

    void retranslateUi(QMainWindow *Calculator)
    {
        Calculator->setWindowTitle(QCoreApplication::translate("Calculator", "Calculator", nullptr));
        Button_memSubtract->setText(QCoreApplication::translate("Calculator", "M-", nullptr));
        Button_memAdd->setText(QCoreApplication::translate("Calculator", "M+", nullptr));
        Button_add->setText(QCoreApplication::translate("Calculator", "+", nullptr));
        Button2->setText(QCoreApplication::translate("Calculator", "2", nullptr));
        Button3->setText(QCoreApplication::translate("Calculator", "3", nullptr));
        Button0->setText(QCoreApplication::translate("Calculator", "0", nullptr));
        Button4->setText(QCoreApplication::translate("Calculator", "4", nullptr));
        Button_equals->setText(QCoreApplication::translate("Calculator", "=", nullptr));
        Button5->setText(QCoreApplication::translate("Calculator", "5", nullptr));
        Button6->setText(QCoreApplication::translate("Calculator", "6", nullptr));
        Button_multiply->setText(QCoreApplication::translate("Calculator", "*", nullptr));
        Button_subtract->setText(QCoreApplication::translate("Calculator", "-", nullptr));
        Display->setText(QCoreApplication::translate("Calculator", "0.0", nullptr));
        Button_changeSign->setText(QCoreApplication::translate("Calculator", "+/-", nullptr));
        Button_divide->setText(QCoreApplication::translate("Calculator", "/", nullptr));
        Button_clear->setText(QCoreApplication::translate("Calculator", "AC", nullptr));
        Button9->setText(QCoreApplication::translate("Calculator", "9", nullptr));
        Button1->setText(QCoreApplication::translate("Calculator", "1", nullptr));
        Button_memGet->setText(QCoreApplication::translate("Calculator", "M", nullptr));
        Button8->setText(QCoreApplication::translate("Calculator", "8", nullptr));
        Button7->setText(QCoreApplication::translate("Calculator", "7", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Calculator: public Ui_Calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
