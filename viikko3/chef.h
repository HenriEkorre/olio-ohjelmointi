#ifndef CHEF_H
#define CHEF_H

#include <string>

class Chef
{
public:
    Chef(std::string name);
    ~Chef();

    void makeSalad(int items);
    void makeSoup(int items);

private:
    std::string chefName;
    int amount;

    std::string getChefName() const;
};

#endif
