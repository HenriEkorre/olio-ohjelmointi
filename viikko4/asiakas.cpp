#include "asiakas.h"

asiakas::asiakas(std::string nimi, double luottoraja)
    : tili(nimi),
    luottoTili(nimi, luottoraja),
    nimi(nimi){

    std::cout << "asiakkuus luotu " << nimi << ":lle \n";
}
asiakas::~asiakas(){}

void asiakas::showSaldo() const
{
    std::cout << "Pankkitilin saldo: "
              << tili.getSaldo() << std::endl;

    std::cout << "Luottotilin saldo: "
              << luottoTili.getSaldo() << std::endl;
}

bool asiakas::talletus(double summa)
{
    return tili.deposit(summa);
}

bool asiakas::nosto(double summa)
{
    return tili.withdraw(summa);
}

bool asiakas::luotonMaksu(double summa)
{
    return luottoTili.deposit(summa);
}

bool asiakas::luotonNosto(double summa)
{
    return luottoTili.withdraw(summa);
}

bool asiakas::tilinsiirto(asiakas& vastaanottaja, double summa)
{
    if (tili.withdraw(summa))
    {
        vastaanottaja.talletus(summa);

        std::cout << "Siirretty " << summa
                  << " tililtä " << nimi
                  << " tilille " << vastaanottaja.nimi
                  << std::endl;

        return true;
    }
    return false;
}
