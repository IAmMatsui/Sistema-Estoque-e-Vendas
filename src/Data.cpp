#include "Data.h"

Data:: Data()
{

}
Data:: ~Data()
{

}

int Data::getDia()
{
    return this->dia;
}

void Data::setDia(int dia)
{
    this->dia = dia;
}


int Data::getMes()
{
    return this->mes;
}

void Data::setMes(int mes)
{
    this->mes = mes;
}

int Data::getAno()
{
    return this->ano;
}

void Data::setAno(int ano)
{
    this->ano = ano;
}

void Data::operator=(Data data)
{
    this->dia = data.getDia();
    this->mes = data.getMes();
    this->ano = data.getAno();
}

