#ifndef CLIENTE_H
#define CLIENTE_H
#include <QString>
#include "conta.h"

class Cliente
{
public:
    Cliente(QString nome);
    void setConta(Conta *value);
    QString toString();
private:
    QString nome;
    Conta *conta;
};

#endif // CLIENTE_H
