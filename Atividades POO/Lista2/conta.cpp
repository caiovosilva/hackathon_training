#include "conta.h"

Conta::Conta(QString num)
    :numero(num)
{
}

void Conta::setSaldo(double num)
{
    saldo = num;
}

QString Conta::toString()
{
    return "Numero da Conta: " + numero + "\n" +
           "Saldo: " + QString::number(saldo);
}
