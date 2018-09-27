#ifndef CONTA_H
#define CONTA_H
#include <QString>

class Conta
{
public:
    void setSaldo(double num);
    virtual void atualizarSaldo() = 0;
    virtual QString toString();
    Conta(QString num);
protected:
    double saldo;
    QString numero;
};

#endif // CONTA_H
