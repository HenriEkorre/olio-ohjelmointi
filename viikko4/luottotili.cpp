#include "luottotili.h"
#include "pankkitili.h"

luottotili::luottotili(std::string nimi, double raja)
    : pankkitili(nimi), luottoRaja(raja)
{
    saldo = 0;
}
luottotili::~luottotili(){}
bool luottotili::deposit(double summa)
{
    if (summa < 0){
        return false;
    }

    saldo += summa;

    if (saldo > 0){
        saldo = 0;
    }
    return true;
}


bool luottotili::withdraw(double summa)
{
    if (summa < 0){
        return false;
    }

    if (saldo - summa < -luottoRaja){
        return false;
    }

    saldo -= summa;
    return true;
}


