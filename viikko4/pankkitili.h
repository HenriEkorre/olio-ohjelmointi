#ifndef PANKKITILI_H
#define PANKKITILI_H
#include <iostream>


class pankkitili
{
public:
    pankkitili(std::string omistaja);
    virtual ~pankkitili();

    virtual bool deposit(double);
    virtual bool withdraw(double);

    double getSaldo() const;

protected:
    std::string omistaja;
    double saldo = 0;
};

#endif // PANKKITILI_H
