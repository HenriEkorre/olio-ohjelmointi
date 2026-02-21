#include "qtLaskuri.h"

qtLaskuri::qtLaskuri(int alku, QObject *parent)
    : QObject(parent), arvo(alku)
{
}

int qtLaskuri::hae() const
{
    return arvo;
}

void qtLaskuri::laske()
{
    arvo++;
    emit arvoMuuttui(arvo);
}

void qtLaskuri::reset()
{
    arvo = 0;
    emit arvoMuuttui(arvo);
}
