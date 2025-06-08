#include "Cliente.h"

Cliente::Cliente()
{

}

Qstring& Cliente::getInsertQuery() {
    return Qstring("INSERT INTO clientes (cnpj, razaoSocial) VALUES ('%1', '%2')").arg(this->cnpj).arg(this->razaoSocial);
}

Qstring& Cliente::getUpdateQuery() {
    return Qstring("UPDATE clientes SET razaoSocial = '%1' WHERE cnpj = %2").arg(this->razaoSocial).arg(this->cnpj);
}

Qstring& Cliente::getDeleteQuery() {
    return Qstring("DELETE FROM produtos WHERE id = %1").arg(this->cnpj);
}

Cliente::Cliente(std::string cnpj, std::string razaoSocial, Endereco endereco, std::string telefone, std::string email)
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
std::string Cliente::getCnpj()
{
    std::string cnpjFormatado;
    return cnpjFormatado;
}
std::string Cliente::getRazaoSocial()
{
    return this->razaoSocial;
}
std::string Cliente::getEndereco()
{
    std::string enderecoStr = this->endereco.getRua() + "," + std::to_string( this->endereco.getNumero() ) + "-" + this->endereco.getBairro() +
            "-" + this->endereco.getComplemento() + "." + this->endereco.getCidade() + "/" +  this->endereco.getEstado() +
            ". CEP: " + this->endereco.getCep();
    return enderecoStr;
}
std::string Cliente::getTelefone()
{
    std::string telefoneFormatado;
    return telefoneFormatado;
}
std::string Cliente::getEmail()
{
    return this->email;
}
void Cliente::setCnpj(std::string cnpj)
{
    this->cnpj = cnpj;
}
void Cliente::setRazaoSocial(std::string razaoSocial)
{
    this->razaoSocial = razaoSocial;
}
void Cliente::setEndereco(Endereco endereco)
{
    this->endereco = endereco;
}
void Cliente::setTelefone(std::string telefone)
{
    this->telefone = telefone;
}
void Cliente::setEmail(std::string email)
{
    this->email = email;
}
std::string Cliente::getRua()
{
    return endereco.getRua();
}

