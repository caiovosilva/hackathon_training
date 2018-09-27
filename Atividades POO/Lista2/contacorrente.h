#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "conta.h"
#include <QString>

class ContaCorrente : public Conta
{
public:
    ContaCorrente(QString num) : Conta(num){}
    void atualizarSaldo();
};

#endif // CONTACORRENTE_H
