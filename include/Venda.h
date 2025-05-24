#ifndef VENDA_H
#define VENDA_H

#include "ItemVenda.h"
#include "Data.h"
#include <vector>


class Venda
{
public:
    Venda();
    ~Venda();
    int getIdVenda();
    void adicionarItem(ItemVenda item, vector<ItemVenda> lista);
    bool removerItem(ItemVenda item, vector<ItemVenda> lista);
    float calcularTotal();
    float getValorSubtotal(ItemVenda item);
    void setData(Data data);
private:
    int idVenda;
    std::vector<ItemVenda> lista;
    float valorTotal;
    Data dataVenda;
};





#endif

