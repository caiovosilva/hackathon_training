#include "cliente.h"

Cliente::Cliente(QString nome)
    :nome(nome)
{

}

void Cliente::setConta(Conta *value)
{
    conta = value;
}

QString Cliente::toString(){
    return "Nome: " + nome + "\n" + conta->toString();
}
