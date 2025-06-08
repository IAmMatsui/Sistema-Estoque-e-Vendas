#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco
{
public:
    enum class Estado
    {
        AC, AL, AP, AM, BA, CE, DF, ES, GO,
        MA, MT, MS, MG, PA, PB, PE, PR, PI, RJ,
        RN, RS, RO, RR, SC, SP, SE, TO, ZZ
    };
    Endereco();
    Endereco(std::string rua, int numero, std::string bairro, std::string complemento, std::string cidade, Estado estado, std::string cep);
    ~Endereco();
    void setRua(std::string rua);
    void setNumero(int numero);
    void setBairro(std::string bairro);
    void setComplemento(std::string complemento);
    void setCidade(std::string cidade);
    void setEstado(Estado estado);
    void setCep(std::string cep);
    std::string getRua();
    int getNumero();
    std::string getBairro();
    std::string getComplemento();
    std::string getCidade();
    std::string getEstado();
    std::string getCep();

private:
    std::string rua;
    int numero;
    std::string bairro;
    std::string complemento;
    std::string cidade;
    Estado estado;
    std::string cep;
};


#endif

