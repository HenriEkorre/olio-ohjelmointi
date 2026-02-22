#ifndef QTLASKURI_H
#define QTLASKURI_H

#include <QObject>

class qtLaskuri : public QObject
{
    Q_OBJECT

private:
    double arvo_a = 0;
    double arvo_b = 0;
    int type = -1; // 0 "+", 1 "-", 2 "/", 3 "*"

public:
    explicit qtLaskuri(QObject *parent = nullptr);

public slots:
    void setA(double value);
    void setB(double value);
    void setType(int t);
    void calculate();
    void reset();

signals:
    void resultReady(QString value);
};

#endif
