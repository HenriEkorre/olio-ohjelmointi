#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H
#include "pankkitili.h"

class luottotili : public pankkitili
{
public:
    luottotili(std::string nimi, double luottoRaja);
    ~luottotili();
    bool deposit(double) override;
    bool withdraw(double) override;

private:
    double luottoRaja;
};


#endif // LUOTTOTILI_H
