#include "Endereco.h"

Endereco::Endereco()
{

}
Endereco::Endereco(std::string rua, int numero, std::string bairro, std::string complemento, std::string cidade, Estado estado, std::string cep)
{
    this->rua = rua;
    this->numero = numero;
    this->bairro = bairro;
    this->complemento = complemento;
    this->cidade = cidade;
    setEstado(estado);
    this->cep = cep;
}
Endereco::~Endereco()
{

}
void Endereco::setRua(std::string rua)
{
    this->rua = rua;
}
void Endereco::setNumero(int numero)
{
    this->numero = numero;
}
void Endereco::setBairro(std::string bairro)
{
    this->bairro = bairro;
}
void Endereco::setComplemento(std::string complemento)
{
    this->complemento = complemento;
}
void Endereco::setCidade(std::string cidade)
{
    this->cidade = cidade;
}
void Endereco::setEstado(Estado novoEstado)
{
    if(novoEstado < Estado::AC || novoEstado > Estado::TO)
    {
        estado = Estado::ZZ;
        return ;
    }
    estado = novoEstado;
}
void Endereco::setCep(std::string cep)
{
    this->cep = cep;
}
std::string Endereco::getRua()
{
    return this->rua;
}
int Endereco::getNumero()
{
    return this->numero;
}
std::string Endereco::getBairro()
{
    return this->bairro;
}
std::string Endereco::getComplemento()
{
    return this->complemento;
}
std::string Endereco::getCidade()
{
    return this->cidade;
}
std::string Endereco::getEstado()
{
    switch(this->estado)
    {
        case Endereco::Estado::AC:
            return "AC";
        case Endereco::Estado::AL:
            return "AL";
        case Endereco::Estado::AP:
            return "AP";
        case Endereco::Estado::AM:
            return "AM";
        case Endereco::Estado::BA:
            return "BA";
        case Endereco::Estado::CE:
            return "CE";
        case Endereco::Estado::DF:
            return "DF";
        case Endereco::Estado::ES:
            return "ES";
        case Endereco::Estado::GO:
            return "GO";
        case Endereco::Estado::MA:
            return "MA";
        case Endereco::Estado::MT:
            return "MT";
        case Endereco::Estado::MS:
            return "MS";
        case Endereco::Estado::MG:
            return "MG";
        case Endereco::Estado::PA:
            return "PA";
        case Endereco::Estado::PB:
            return "PB";
        case Endereco::Estado::PR:
            return "PR";
        case Endereco::Estado::PE:
            return "PE";
        case Endereco::Estado::PI:
            return "PI";
        case Endereco::Estado::RJ:
            return "RJ";
        case Endereco::Estado::RN:
            return "RN";
        case Endereco::Estado::RS:
            return "RS";
        case Endereco::Estado::RO:
            return "RO";
        case Endereco::Estado::RR:
            return "RR";
        case Endereco::Estado::SC:
            return "SC";
        case Endereco::Estado::SP:
            return "SP";
        case Endereco::Estado::SE:
            return "SE";
        case Endereco::Estado::TO:
            return "TO";
        default:
            return "ZZ";
    }
}

std::string Endereco::getCep()
{
    return this->cep;
}

