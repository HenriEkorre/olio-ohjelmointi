#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"

class asiakas
{
public:
    asiakas(std::string nimi, double luottoraja);
    ~asiakas();

    void showSaldo() const;

    bool talletus(double summa);
    bool nosto(double summa);

    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    bool tilinsiirto(asiakas& vastaanottaja, double summa);

private:
    std::string nimi;
    pankkitili tili;
    luottotili luottoTili;
};

#endif
