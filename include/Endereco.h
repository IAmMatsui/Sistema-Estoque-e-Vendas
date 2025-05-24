#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

using namespace std;

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
    Endereco(string rua, int numero, string bairro, string complemento, string cidade, Estado estado, string cep);
    ~Endereco();
    void setRua(string rua);
    void setNumero(int numero);
    void setBairro(string bairro);
    void setComplemento(string complemento);
    void setCidade(string cidade);
    void setEstado(Estado estado);
    void setCep(string cep);
    string getRua();
    int getNumero();
    string getBairro();
    string getComplemento();
    string getCidade();
    string getEstado();
    string getCep();

private:
    string rua;
    int numero;
    string bairro;
    string complemento;
    string cidade;
    Estado estado;
    string cep;
};


#endif

