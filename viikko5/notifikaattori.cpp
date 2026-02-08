#include "notifikaattori.h"
#include "seuraaja.h"
#include <iostream>

Notifikaattori::Notifikaattori() {}

void Notifikaattori::lisaa(Seuraaja *s)
{
    if(seuraajat == nullptr)
    {
        seuraajat = s;
        return;
    }

    Seuraaja *temp = seuraajat;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = s;
}

void Notifikaattori::tulosta()
{
    Seuraaja *temp = seuraajat;

    while(temp != nullptr)
    {
        std::cout << temp->getNimi() << std::endl;
        temp = temp->next;
    }
}

void Notifikaattori::postita(std::string v)
{
    Seuraaja *temp = seuraajat;

    while(temp != nullptr)
    {
        temp->paivitys(v);
        temp = temp->next;
    }
}

void Notifikaattori::poista(Seuraaja *s)
{
    if(seuraajat == nullptr)
        return;

    if(seuraajat == s)
    {
        seuraajat = seuraajat->next;
        s->next = nullptr;
        return;
    }

    Seuraaja *temp = seuraajat;

    while(temp->next != nullptr)
    {
        if(temp->next == s)
        {
            temp->next = s->next;
            s->next = nullptr;
            return;
        }
        temp = temp->next;
    }
}
