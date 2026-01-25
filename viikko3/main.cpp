#include "chef.h"
#include "italianchef.h"
#include <iostream>

int main()
{
    Chef basicChef("John");
    basicChef.makeSalad(10);
    basicChef.makeSoup(5);

    italianChef mario("Mario");
    mario.makeSalad(15);
    mario.makeSoup(7);
    mario.askSecret("pizza", 500, 300);

    mario.askSecret("wrongpass", 200, 100);

    return 0;
}
