#include "Estoque.h"

Estoque::Estoque()
{

}
Estoque::~Estoque()
{

}
void Estoque::setQuantidadeVirtual(int quantidade)
{
    this->quantidadeVirtual = quantidade;
}
int Estoque::getQuantidadeVirtual()
{
    return this->quantidadeVirtual;
}
bool Estoque::reservarQuantidadeVirtual(int quantidade)
{
    if(!verificarEstoqueVenda(quantidade))
    {
        return false;
    }
    setQuantidadeVirtual(quantidade);
    return true;
}
void Estoque::atualizarQuantidadeVirtual(int quantidade)
{
    int quantidadeAtualizada = getQuantidadeVirtual() - quantidade;
    setQuantidadeVirtual(quantidadeAtualizada);
}
bool Estoque::verificarEstoqueVenda(int quantidade)
{
    if(quantidade + getQuantidadeVirtual() < getQuantidadeFisica())
    {
        return false;
    }
    return true;
}
void Estoque::aumentarEstoque(int quantidade)
{
    int quantidadeAtualizada = getQuantidadeFisica() + quantidade;
    setQuantidadeFisica(quantidadeAtualizada);
}
void Estoque::diminuirEstoque(int quantidade)
{
    int quantidadeAtualizada = getQuantidadeFisica() - quantidade;
    setQuantidadeFisica(quantidadeAtualizada);
}
void Estoque::setQuantidadeFisica(int quantidade)
{
    this->quantidadeFisica = quantidade;
}
int Estoque::getQuantidadeFisica()
{
    return this->quantidadeFisica;
}
void Estoque::setQuantidadeMin(int quantidade)
{
    this->quantidadeMin = quantidade;
}
int Estoque::getQuantidadeMin()
{
    return this->quantidadeMin;
}
void Estoque::setQuantidadeMax(int quantidade)
{
    this->quantidadeMax = quantidade;
}
int Estoque::getQuantidadeMax()
{
    return this->quantidadeMax;
}

