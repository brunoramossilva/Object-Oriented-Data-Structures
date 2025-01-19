#include <iostream>
#include <vector>

// Armazena os chutes errados:
std::vector <char> chutes_errados;

// Função responsável por imprimir os chutes errados:
void verificacao_de_chutes_errados(){

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
