#ifndef CONTA_BANCARIA_H
#define CONTA_BANCARIA_H

#include "Cliente.h"
#include <iostream>
using namespace std;

class ContaBancaria {
private:
    int numero;
    double saldo;
    Cliente titular;

public:
    ContaBancaria(int numero, Cliente titular, double saldo = 0.0); //cria conta
    void depositar(double valor);
    void sacar(double valor);
    void transferir(double valor, ContaBancaria &destino);
    void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2);//os voids aqui tão mostrando os metodos pra movimentar o dinheiro
    void exibirSaldo();
    void exibirInformacoes(); //mostra o saldo e infos
};

#endif