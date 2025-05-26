#include "Venda.h"

Venda::Venda()
{

}
Venda::~Venda()
{

}
int Venda::getIdVenda()
{
    return this->idVenda;
}
void Venda::adicionarItem(ItemVenda item, std::vector<ItemVenda> lista)
{
    lista.push_back(item);
}
bool Venda::removerItem(ItemVenda item, std::vector<ItemVenda> lista)
{
    /*for(int i=0; i < lista.size();i++)
    {
        if(item == lista.at(i))
        {
            lista.pop_back(i);
            return true;
        }
    }*/
    return false;
}
float Venda::calcularTotal()
{
    float valor = 6969;
    return valor;
}
float Venda::getValorSubtotal(ItemVenda item)
{
    return 6969;
}
void Venda::setData(Data data)
{
    this->dataVenda = data;
}

