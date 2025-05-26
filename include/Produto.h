#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>
#include "Data.h"

class Produto
{
public:
    enum class UnidadeMedida
    {
        ERR, UN, ML, L, G, KG
    };
    enum class Categoria
    {
        INVALIDA, ALIMENTICIO, LIMPEZA, ELETRONICOS
    };
    Produto();
    Produto(int idProduto, std::string nome, Data dataFabricacao, float preco, Categoria categoria, UnidadeMedida medida);
    ~Produto();
    int getIdProduto();
    void setIdProduto(int idProduto);
    std::string getNome();
    void setNome(std::string nome);
    Data getDataFabricacao();
    void setDataFabricacao(Data data);
    float getPreco();
    void setPreco(float preco);
    std::string getDescricao();
    void setCategoria(Categoria categoria);
    Categoria getCategoria();
    std::string getMedida();
    void setUnidadeMedida(UnidadeMedida medida);
    //bool operator==(const Produto& outro);

private:
    int idProduto;
    std::string nome;
    Data dataFabricacao;
    float preco;
    float quantia;
    Categoria categoria;
    UnidadeMedida medida;
};

#endif // PRODUTO_H

