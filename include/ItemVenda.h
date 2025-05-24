#ifndef ITEMVENDA_H
#define ITEMVENDA_H

#include "Produto.h"

class ItemVenda
{
public:
    ItemVenda();
    ItemVenda(int quantidade, Produto produto);
    ~ItemVenda();
    void setQuantidade(int quantidade);
    int getQuantidade();
    float calularSubtotal();
    float getPreco();
    Produto getProduto();
    //bool operator==(const ItemVenda& item);
private:
    int quantidade;
    Produto produto;
};



#endif

