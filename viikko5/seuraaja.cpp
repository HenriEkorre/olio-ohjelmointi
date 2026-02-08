#include "seuraaja.h"
#include <iostream>
Seuraaja::Seuraaja(std::string n) {

    nimi = n;
    std::cout << "luodaan seuraaja " << nimi << std::endl;
}

std::string Seuraaja::getNimi() const{
    return nimi;
}

void Seuraaja::paivitys(std::string viesti){
    std::cout << nimi << " sai viestin " << viesti << std::endl;
}
