#ifndef SEURAAJA_H
#define SEURAAJA_H
#include <iostream>

class Seuraaja
{
public:
    Seuraaja(std::string n);
    Seuraaja *next = nullptr;

    std::string getNimi() const;
    void paivitys(std::string viesti);



private:
    std::string nimi;
};

#endif // SEURAAJA_H
