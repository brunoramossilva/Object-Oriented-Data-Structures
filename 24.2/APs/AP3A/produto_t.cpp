#include "produto.h"
#include <iostream>
#include <locale.h>

void verificar();

Produto produto1(1010, "Bola de Futebol", 30.0);

int main() {

    setlocale(LC_ALL, "Portuguese");
    std::cout << "Inicio da execucao no Main.\n";

    Produto produto2(2020, "Tenis de Basquete", 120.75);
    produto1.exibir();
    produto2.exibir();

    Produto& ref = produto2;

    ref.setId(2030);
    ref.setNome("Tenis de Corrida");
    ref.setValor(ref.getValor() - 40.0);
    ref.exibir();

    verificar();
    verificar();

    std::cout << "Fim da execucao no Main.\n";
    return 0;

}

void verificar() {
    Produto temp1(3030, "Camiseta", 15.0);
    temp1.exibir();

    static Produto temp2(4040, "Rede de Volei", 50.0);
    temp2.exibir();
}
