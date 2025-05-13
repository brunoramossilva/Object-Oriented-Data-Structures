#include "produto.h"
#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

void verificar(Produto p);

Produto produto1(1234, "Cadeira", 249.99);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    cout << "\nInicio da execucao no main().\n" << endl;
    Produto produto2(5678, "Camisa", 79.90);

    cout << "\nChamada para verificar()." << endl;
    verificar(produto1);

    cout << "\nChamada seguinte para verificar()." << endl;
    verificar(produto2);

    cout << "\nExecucao final no main().\n"
         << "\nAinda temos " << Produto::getQuantidade()
         << " itens\n" << endl;

    return 0;
}

void verificar(Produto p)
{
    cout << "\nProduto fornecido:" << endl;
    p.exibir();
    static Produto mochila(91011, "Mochila", 129.0);
    cout << "\nProduto estatico na funcao verificar():" << endl;
    mochila.exibir();
    cout << "\nFim da execucao na funcao verificar()" << endl;
}
