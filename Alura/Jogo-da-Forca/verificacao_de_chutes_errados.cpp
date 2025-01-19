#include <iostream>
#include <vector>
#include <locale.h>

// Armazena os chutes errados:
extern std::vector <char> chutes_errados;

// Fun��o respons�vel por imprimir os chutes errados:
void verificacao_de_chutes_errados(){

    setlocale(LC_ALL, "Portuguese");

    std::cout << std::endl;
    std::cout << "******************************************************" << std::endl;
    std::cout << "-*-*-*-*-*-*-*-*-* Chutes Errados -*-*-*-*-*-*-*-*-*-*" << std::endl;
    for (char letra : chutes_errados){
        std::cout << "       | " << letra << " |";
    }
    std::cout << std::endl;
    std::cout << "******************************************************" << std::endl;
    std::cout << std::endl;

}
