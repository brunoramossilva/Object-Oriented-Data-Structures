#include <iostream>
#include <locale.h>

// Fun??o respons?vel por imprimir o cabe?alho do jogo:
void imprime_cabecalho(){

    setlocale(LC_ALL, "Portuguese");

    std::cout << std::endl;
    std::cout << "******************************************************" << std::endl;
    std::cout << "*-*-*-*-*-* Bem-Vindo(a) ao Jogo da Forca -*-*-*-*-*-" << std::endl;
    std::cout << "          # Developed by Bruno P. R. Silva #          " << std::endl;
    std::cout << "******************************************************" << std::endl;
    std::cout << std::endl;

}
