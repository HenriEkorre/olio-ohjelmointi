#include "italianchef.h"
#include <iostream>

italianChef::italianChef(std::string name)
    : Chef(name)
{
}

italianChef::~italianChef()
{
}

bool italianChef::askSecret(std::string password, int flour, int water)
{
    if (password == "pizza")
    {
        std::cout << "Salasana ok\n";
        makePizza(flour, water);
        return true;
    }
    else
    {
        std::cout << "Salasana vaarin!\n";
        return false;
    }
}

void italianChef::makePizza(int flour, int water)
{
    int pizzasFromFlour = flour / 5;
    int pizzasFromWater = water / 5;

    int totalPizzas = std::min(pizzasFromFlour, pizzasFromWater);


    if (totalPizzas > 0)
    {
        std::cout << "Making " << totalPizzas
                  << " pizza(s) \n";
    }
    else
    {
        std::cout << "Not enough ingredients to make a pizza.\n";
    }
}
