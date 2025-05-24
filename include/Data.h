#ifndef DATA_H
#define DATA_H

using namespace std;

class Data
{
public:
    Data();
    ~Data();
    int getDia();
    void setDia(int dia);
    int getMes();
    void setMes(int mes);
    int getAno();
    void setAno(int ano);
    void operator=(Data data);

private:
    int dia;
    int mes;
    int ano;
};

#endif // DATA_H

