#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"
#include <iostream>

class Notifikaattori
{
public:
    Notifikaattori();
    void lisaa(Seuraaja *);
    void poista(Seuraaja *);
    void tulosta();
    void postita(std::string v);


private:
    Seuraaja *seuraajat = nullptr;
};


#endif // NOTIFIKAATTORI_H
