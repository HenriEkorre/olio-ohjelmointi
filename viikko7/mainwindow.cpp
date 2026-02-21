#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , laskuri(0)
{
    ui->setupUi(this);
    ui->lukuNaytto->setText(QString::number(laskuri.hae()));

    connect(&laskuri, &qtLaskuri::arvoMuuttui,
            this, [this](int value){
                ui->lukuNaytto->setText(QString::number(value));
            });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_countButton_clicked()
{
    laskuri.laske();
}

void MainWindow::on_resetButton_clicked()
{
    laskuri.reset();
}

