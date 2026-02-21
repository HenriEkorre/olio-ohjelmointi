#ifndef QTLASKURI_H
#define QTLASKURI_H

#include <QObject>

class qtLaskuri : public QObject
{
    Q_OBJECT

private:
    int arvo;

public:
    explicit qtLaskuri(int alku = 0, QObject *parent = nullptr);

    int hae() const;

public slots:
    void laske();
    void reset();

signals:
    void arvoMuuttui(int uusiArvo);
};

#endif
