#include <iostream>
#include "notifikaattori.h"
using namespace std;

int main()
{
    Notifikaattori n;

    Seuraaja a("Matti");
    Seuraaja b("Liisa");
    Seuraaja c("Kalle");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);

    n.tulosta();

    n.postita("Uusi video!");

    n.poista(&b);

    n.tulosta();
}
