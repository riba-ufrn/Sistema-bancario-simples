#include "Cliente.h"

Cliente::Cliente(string nome, string cpf) {
    this->nome = nome;
    this->cpf = cpf;
}

string Cliente::getNome() { return nome; }
string Cliente::getCpf() { return cpf; }