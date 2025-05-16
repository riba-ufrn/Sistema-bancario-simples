#include "ContaBancaria.h"

ContaBancaria::ContaBancaria(int numero, Cliente titular, double saldo) {
    this->numero = numero;
    this->titular = titular;
    this->saldo = saldo;
} //criador de conta

void ContaBancaria::depositar(double valor) {
    if (valor > 0) {
        saldo += valor;
    }
} //aumenta o saldo da conta

void ContaBancaria::sacar(double valor) {
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
    }
} //diminui o saldo se tiver grana

void ContaBancaria::transferir(double valor, ContaBancaria &destino) {
    if (valor > 0 && saldo >= valor) {
        saldo -= valor;
        destino.depositar(valor);
    }
} //manda tipo um pix

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) {
    if (valor > 0 && saldo >= valor) {
        double metade = valor / 2.0;
        saldo -= valor;
        destino1.depositar(metade);
        destino2.depositar(metade);
    }
} //divide a grana pra duas contas diferentes

void ContaBancaria::exibirSaldo() {
    cout << "Saldo atual: R$ " << saldo << endl;
} //mostra qnt de dinheiro tem

void ContaBancaria::exibirInformacoes() {
    cout << "Titular: " << titular.getNome() 
         << " (CPF: " << titular.getCpf() << ")" << endl;
    cout << "Conta: " << numero << endl;
    cout << "Saldo: R$ " << saldo << endl;
} //mostra tudo da conta