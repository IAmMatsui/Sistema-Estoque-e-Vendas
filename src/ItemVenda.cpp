#include "ItemVenda.h"

ItemVenda::ItemVenda()
{

}
ItemVenda::ItemVenda(int quantidade, Produto produto)
{
    this->quantidade = quantidade;
    this->produto = produto;

}
ItemVenda::~ItemVenda()
{

}
void ItemVenda::setQuantidade(int quantidade)
{
    this->quantidade = quantidade;
}
int ItemVenda::getQuantidade()
{
    return this->quantidade;
}
float ItemVenda::getPreco()
{
    return this->produto.getPreco();
}
Produto ItemVenda::getProduto()
{
    return this->produto;
}

float ItemVenda::calularSubtotal()
{
    return getPreco() * quantidade;
}

/*bool ItemVenda::operator==(const ItemVenda& outro)
{
    if(produto == outro.getProduto())
    {
        if(quantidade == outro.getQuantidade())
        {
            return true;
        }
    }
    return false;
}
*/

