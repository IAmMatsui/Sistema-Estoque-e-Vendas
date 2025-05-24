#include "Produto.h"
#include "Cliente.h"
#include <iostream>


int main()
{
    Produto bolacha;
    Endereco endereco("Rua amendias", 3675, "chegueiro", "casa com luz vermelha", "Dourados", Endereco::Estado::MS, "79815-000");
    Cliente cliente1("06.923.465/0001-21", "Casa de costura", endereco, "(67) 99969-6996", "buerinho@hotmail.com");

    cout << cliente1.getRazaoSocial() << endl;
    cout << cliente1.getEndereco() << endl;
    cout << cliente1.getRua();
    return 0;
}

