#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , laskuri(0)
{
    ui->setupUi(this);
    QPushButton* numbers[] = {
        ui->num0, ui->num1, ui->num2, ui->num3, ui->num4,
        ui->num5, ui->num6, ui->num7, ui->num8, ui->num9
    };

    for(QPushButton* b : numbers)
        connect(b, &QPushButton::clicked, this, &MainWindow::numberClickedHandler);


    QPushButton* ops[] = { ui->add, ui->sub, ui->mul, ui->div };

    for(QPushButton* b : ops)
        connect(b, &QPushButton::clicked, this, &MainWindow::operatorClickedHandler);

    connect(ui->submitBtn, &QPushButton::clicked,
            this, &MainWindow::clearAndEnterClickedHandler);

    connect(ui->clearBtn, &QPushButton::clicked,
            this, &MainWindow::resetLineEdits);

    connect(&laskuri, &qtLaskuri::resultReady,
            ui->lukuNaytto_r, &QLineEdit::setText);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::numberClickedHandler()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    if(!btn) return;

    QLineEdit *target;

    if(!secondNumber)
        target = ui->lukuNaytto_1;
    else
        target = ui->lukuNaytto_2;

    target->setText(target->text() + btn->text());
}

void MainWindow::operatorClickedHandler()
{
    QPushButton *btn = qobject_cast<QPushButton*>(sender());
    if(!btn) return;

    laskuri.setA(ui->lukuNaytto_1->text().toDouble());

    QString op = btn->text();

    if(op == "+") laskuri.setType(0);
    if(op == "-") laskuri.setType(1);
    if(op == "/") laskuri.setType(2);
    if(op == "*") laskuri.setType(3);

    secondNumber = true;
}

void MainWindow::clearAndEnterClickedHandler()
{
    laskuri.setB(ui->lukuNaytto_2->text().toDouble());
    laskuri.calculate();
}

void MainWindow::resetLineEdits()
{
    ui->lukuNaytto_1->clear();
    ui->lukuNaytto_2->clear();
    ui->lukuNaytto_r->clear();

    secondNumber = false;
    laskuri.reset();
}

