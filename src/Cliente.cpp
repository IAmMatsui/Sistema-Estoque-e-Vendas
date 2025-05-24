#include "Cliente.h"

Cliente::Cliente()
{

}
Cliente::Cliente(string cnpj, string razaoSocial, Endereco endereco, string telefone, string email)
{
    setCnpj(cnpj);
    setRazaoSocial(razaoSocial);
    setEndereco(endereco);
    setTelefone(telefone);
    setEmail(email);
}
Cliente::~Cliente()
{

}
string Cliente::getCnpj()
{
    string cnpjFormatado;
    return cnpjFormatado;
}
string Cliente::getRazaoSocial()
{
    return this->razaoSocial;
}
string Cliente::getEndereco()
{
    string enderecoStr = this->endereco.getRua() + "," + to_string( this->endereco.getNumero() ) + "-" + this->endereco.getBairro() +
            "-" + this->endereco.getComplemento() + "." + this->endereco.getCidade() + "/" +  this->endereco.getEstado() +
            ". CEP: " + this->endereco.getCep();
    return enderecoStr;
}
string Cliente::getTelefone()
{
    string telefoneFormatado;
    return telefoneFormatado;
}
string Cliente::getEmail()
{
    return this->email;
}
void Cliente::setCnpj(string cnpj)
{
    this->cnpj = cnpj;
}
void Cliente::setRazaoSocial(string razaoSocial)
{
    this->razaoSocial = razaoSocial;
}
void Cliente::setEndereco(Endereco endereco)
{
    this->endereco = endereco;
}
void Cliente::setTelefone(string telefone)
{
    this->telefone = telefone;
}
void Cliente::setEmail(string email)
{
    this->email = email;
}
string Cliente::getRua()
{
    return endereco.getRua();
}

