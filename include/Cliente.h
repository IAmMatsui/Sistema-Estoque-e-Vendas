#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Endereco.h"

using namespace std;

class Cliente
{
public:
    Cliente();
    Cliente(string cnpj, string razaoSocial, Endereco endereco, string telefone, string email);
    ~Cliente();
    string getCnpj();
    string getRazaoSocial();
    string getEndereco();
    string getTelefone();
    string getEmail();
    void setCnpj(string cnpj);
    void setRazaoSocial(string razaoSocial);
    void setEndereco(Endereco endereco);
    void setTelefone(string telefone);
    void setEmail(string email);
    string getRua();

private:
    string cnpj;
    string razaoSocial;
    Endereco endereco;
    string telefone;
    string email;
};

#endif

