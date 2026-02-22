#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "qtlaskuri.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    qtLaskuri laskuri;

    bool secondNumber = false;

    void numberClickedHandler();
    void operatorClickedHandler();
    void clearAndEnterClickedHandler();
    void resetLineEdits();

};
#endif // MAINWINDOW_H
