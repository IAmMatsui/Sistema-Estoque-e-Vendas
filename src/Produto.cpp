#include "Produto.h"

Produto::Produto()
{

}

Produto::Produto(int idProduto, std::string nome, Data dataFabricacao, float preco, Categoria categoria, UnidadeMedida medida)
{
    this->idProduto = idProduto;
    this->nome = nome;
    this->dataFabricacao = dataFabricacao;
    this->preco = preco;
    this->categoria = categoria;
    this->medida = medida;
}

Produto::~Produto()
{

}

int Produto::getIdProduto()
{
    return this->idProduto;
}

void Produto::setIdProduto(int idProduto)
{
    this->idProduto = idProduto;
}


std::string Produto::getNome()
{
    return this->nome;
}


void Produto::setNome(std::string nome)
{
    this->nome = nome;
}


Data Produto::getDataFabricacao()
{
    return this->dataFabricacao;
}


void Produto::setDataFabricacao(Data data)
{
    this->dataFabricacao = data;
}


float Produto::getPreco()
{
    return this->preco;
}


void Produto::setPreco(float preco)
{
    this->preco = preco;
}


Produto::Categoria Produto::getCategoria()
{
    return this->categoria;
}

void Produto::setCategoria(Categoria categoria)
{
    switch(categoria)
    {
        case Categoria::ALIMENTICIO:
        case Categoria::ELETRONICOS:
        case Categoria::LIMPEZA:
            this->categoria = categoria;
            break;
        default:
            this->categoria = Produto::Categoria::INVALIDA;
    }
}

void Produto::setUnidadeMedida(UnidadeMedida medida)
{
    switch(medida)
    {
        case UnidadeMedida::G:
        case UnidadeMedida::KG:
        case UnidadeMedida::L:
        case UnidadeMedida::ML:
        case UnidadeMedida::UN:
            this->medida = medida;
            break;
        default:
            this->medida = Produto::UnidadeMedida::ERR;
    }
}

std::string Produto::getMedida()
{
    switch(this->medida)
    {
        case UnidadeMedida::G:
            return " g";
            break;
        case UnidadeMedida::KG:
            return " kg";
            break;
        case UnidadeMedida::L:
            return " l";
            break;
        case UnidadeMedida::ML:
            return " ml";
            break;
        case UnidadeMedida::UN:
            return " un";
            break;
        default:
            return " --";
    }
}

std::string Produto:: getDescricao()
{
    return this->nome + " - " + (char)this->quantia + " - R$ " + (char)this->preco;
}

/*bool Produto::operator==(const Produto& outro)
{
    return (idProduto == outro.getIdProduto() && nome == outro.getNome() && dataFabricacao == outro.dataFabricacao() && preco == outro.getPreco() && categoria == outro.getCategoria() && medida == outro.getMedida());
}*/

