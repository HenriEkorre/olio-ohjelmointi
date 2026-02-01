#include "pankkitili.h"
#include <iostream>
pankkitili::pankkitili(std::string omistaja) {
    std::cout << "pankkitili luotu " << omistaja <<":lle\n";
}
pankkitili::~pankkitili(){}



double pankkitili::getSaldo() const
{
    return saldo;
}

bool pankkitili::deposit(double newSaldo)
{
    if(newSaldo < 0){
        return false;
    }
    saldo = saldo + newSaldo;
    std::cout << "depositted to account, amount: " << newSaldo << ". New balance: " << saldo <<"\n";
    return true;
}

bool pankkitili::withdraw(double newSaldo)
{
    if(newSaldo < 0){
        return false;
    }
    saldo = saldo - newSaldo;
    std::cout << "withdrawn from saldo: " << newSaldo << ". New balance: " << saldo<<"\n";
    return true;
}

