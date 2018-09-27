#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include "conta.h"


class ContaPoupanca : public Conta
{
public:
    ContaPoupanca(QString num) : Conta(num){}
    void atualizarSaldo();
};

#endif // CONTAPOUPANCA_H
