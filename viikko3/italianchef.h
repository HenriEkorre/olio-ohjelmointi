#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class italianChef : public Chef
{
public:
    italianChef(std::string name);
    ~italianChef();

    bool askSecret(std::string password, int flour, int water);

private:
    void makePizza(int flour, int water);
};

#endif
