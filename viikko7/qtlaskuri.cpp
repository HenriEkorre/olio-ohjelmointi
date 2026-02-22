#include "qtLaskuri.h"

qtLaskuri::qtLaskuri(QObject *parent)
    : QObject(parent)
{
}

void qtLaskuri::setA(double value)
{
    arvo_a = value;
}

void qtLaskuri::setB(double value)
{
    arvo_b = value;
}

void qtLaskuri::setType(int t)
{
    type = t;
}

void qtLaskuri::calculate()
{
    double result = 0;

    switch(type)
    {
        case 0: result = arvo_a + arvo_b; break;
        case 1: result = arvo_a - arvo_b; break;

        case 2:
            if(arvo_b == 0){
                emit resultReady("Error");
                return;
            }
            result = arvo_a / arvo_b;
            break;

        case 3: result = arvo_a * arvo_b; break;

        default:
            emit resultReady("?");
            return;
    }

    emit resultReady(QString::number(result));
}

void qtLaskuri::reset()
{
    arvo_a = 0;
    arvo_b = 0;
    type = -1;
}
