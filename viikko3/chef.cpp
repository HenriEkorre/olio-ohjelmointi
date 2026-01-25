#include "chef.h"
#include <iostream>

Chef::Chef(std::string name)
    : chefName(name)
{
    std::cout << "Chef constructor called. Name: "
              << chefName << std::endl;
}

Chef::~Chef()
{
    std::cout << "Chef destructor called. Name: "
              << chefName << std::endl;
}

void Chef::makeSalad(int items)
{
    amount = items / 5;
    std::cout << "Chef " << getChefName()
              << " can make " << amount
              << " salad portions with "
              << items << " items.\n";
}

void Chef::makeSoup(int items)
{
    amount = items / 3;
    std::cout << "Chef " << getChefName()
              << " can make " << amount
              << " soup portions with "
              << items << " items.\n";
}

std::string Chef::getChefName() const
{
    return chefName;
}
