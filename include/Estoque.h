#ifndef ESTOQUE_H
#define ESTOQUE_H

#include "Produto.h"

class Estoque
{
public:
    Estoque();
    ~Estoque();
    bool reservarQuantidadeVirtual(int quantidade);
    void atualizarQuantidadeVirtual(int quantidade);
    bool verificarEstoqueVenda(int quantidade);
    void aumentarEstoque(int quantidade);
    void diminuirEstoque(int quantidade);
    void setQuantidadeFisica(int quantidade);
    int getQuantidadeFisica();
    void setQuantidadeMin(int quantidade);
    int getQuantidadeMin();
    void setQuantidadeMax(int quantidade);
    int getQuantidadeMax();
    void setQuantidadeVirtual(int quantidade);
    int getQuantidadeVirtual();

private:
    int quantidadeFisica;
    int quantidadeVirtual;
    int quantidadeMax;
    int quantidadeMin;
    Produto produto;
};



#endif // ESTOQUE_H

