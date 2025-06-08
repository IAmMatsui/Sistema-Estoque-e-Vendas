#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <QtSql>
#include "Endereco.h"
#include "ObjetoBD.h"

class Cliente: public ObjetoBD
{
public:
    Cliente();
    Cliente(std::string cnpj, std::string razaoSocial, Endereco endereco, std::string telefone, std::string email);
    ~Cliente();
    std::string getCnpj();
    std::string getRazaoSocial();
    std::string getEndereco();
    std::string getTelefone();
    std::string getEmail();
    void setCnpj(std::string cnpj);
    void setRazaoSocial(std::string razaoSocial);
    void setEndereco(Endereco endereco);
    void setTelefone(std::string telefone);
    void setEmail(std::string email);
    std::string getRua();

private:
    std::string cnpj;
    std::string razaoSocial;
    Endereco endereco;
    std::string telefone;
    std::string email;
};

#endif

