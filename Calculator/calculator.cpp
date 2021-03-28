#include "calculator.h"
#include "ui_calculator.h"

double calcVal = 0.0;
double memVal = 0.0;
bool divTrigger = false;
bool multTrigger = false;
bool addTrigger = false;
bool subTrigger = false;

Calculator::Calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Calculator)
{
    ui->setupUi(this);
    ui->Display->setText(QString::number(calcVal));
    QPushButton *numButtons[10];
    for (int i = 0; i < 10; i++) {
        QString butName = "Button" + QString::number(i);
        numButtons[i] = Calculator::findChild<QPushButton *>(butName);
        connect(numButtons[i], SIGNAL(released()), this, SLOT(NumPressed()));
    }
    connect(ui->Button_add, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Button_subtract, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Button_multiply, SIGNAL(released()), this, SLOT(MathButtonPressed()));
    connect(ui->Button_divide, SIGNAL(released()), this, SLOT(MathButtonPressed()));

    connect(ui->Button_equals, SIGNAL(released()), this, SLOT(EqualButton()));

    connect(ui->Button_changeSign, SIGNAL(released()), this, SLOT(ChangeNumberSign()));

    connect(ui->Button_clear, SIGNAL(released()), this, SLOT(ClearInput()));

    connect(ui->Button_memAdd, SIGNAL(released()), this, SLOT(MemAddPressed()));
    connect(ui->Button_memSubtract, SIGNAL(released()), this, SLOT(MemSubtractPressed()));
    connect(ui->Button_memGet, SIGNAL(released()), this, SLOT(MemGetPressed()));
}

Calculator::~Calculator()
{
    delete ui;
}

void Calculator::NumPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString displayVal = ui->Display->text();
    if (displayVal.toDouble() == 0 || displayVal.toDouble() == 0.0) {
        ui->Display->setText(butVal);
    } else {
        QString newVal = displayVal + butVal;
        double dblNewVal = newVal.toDouble();
        ui->Display->setText(QString::number(dblNewVal, 'g', 16));
    }
}

void Calculator::MathButtonPressed() {
    QString displayVal = ui->Display->text();
    if (addTrigger || subTrigger || multTrigger || divTrigger) {
        if (addTrigger) {
            calcVal += displayVal.toDouble();
        } else if (subTrigger) {
            calcVal -= displayVal.toDouble();
        } else if (multTrigger) {
            calcVal *= displayVal.toDouble();
        } else if (divTrigger) {
            calcVal /= displayVal.toDouble();
        }
    } else {
        calcVal = displayVal.toDouble();
    }
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;

    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if (QString::compare(butVal, "/", Qt::CaseInsensitive) == 0) {
        divTrigger = true;
    } else if (QString::compare(butVal, "*", Qt::CaseInsensitive) == 0) {
        multTrigger = true;
    } else if (QString::compare(butVal, "+", Qt::CaseInsensitive) == 0) {
        addTrigger = true;
    } else if (QString::compare(butVal, "-", Qt::CaseInsensitive) == 0) {
        subTrigger = true;
    }
    ui->Display->setText("");
}

void Calculator::EqualButton() {
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    double solution = dblDisplayVal;
    if (addTrigger || subTrigger || multTrigger || divTrigger) {
        if (addTrigger) {
            solution = calcVal + dblDisplayVal;
        } else if (subTrigger) {
            solution = calcVal - dblDisplayVal;
        } else if (multTrigger) {
            solution = calcVal * dblDisplayVal;
        } else if (divTrigger) {
            solution = calcVal / dblDisplayVal;
        }
    }
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    ui->Display->setText(QString::number(solution));
}

void Calculator::ChangeNumberSign() {
    QString displayVal = ui->Display->text();
    double dblDisplayVal = displayVal.toDouble();
    double displayValSign = -1 * dblDisplayVal;
    ui->Display->setText(QString::number(displayValSign));
}

void Calculator::ClearInput() {
    calcVal = 0.0;
    memVal = 0.0;
    divTrigger = false;
    multTrigger = false;
    addTrigger = false;
    subTrigger = false;
    ui->Display->setText(QString::number(calcVal));
}

void Calculator::MemAddPressed() {
    memVal += ui->Display->text().toDouble();
}

void Calculator::MemSubtractPressed() {
    memVal -= ui->Display->text().toDouble();
}

void Calculator::MemGetPressed() {
    ui->Display->setText(QString::number(memVal, 'g', 16));
}
