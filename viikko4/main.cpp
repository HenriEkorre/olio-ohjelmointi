#include <iostream>
#include "asiakas.h"

int main()
{
    asiakas aapeli("Aapeli", 1000);

    aapeli.showSaldo();

    aapeli.talletus(250);
    aapeli.luotonNosto(150);

    aapeli.showSaldo();

    std::cout << std::endl;

    asiakas bertta("Bertta", 1000);

    bertta.showSaldo();

    std::cout << std::endl;

    std::cout << "Aapeli" << std::endl;
    aapeli.showSaldo();

    aapeli.tilinsiirto(bertta, 50);

    bertta.showSaldo();

    return 0;
}
