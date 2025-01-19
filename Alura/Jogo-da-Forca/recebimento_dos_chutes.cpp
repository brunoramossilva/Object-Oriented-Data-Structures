#include <iostream>
#include <ctype.h>
#include <map>
#include <vector>
#include <locale.h>
#include "letra_existe.hpp"

// Verifica se a letra foi chutada e a converte para um valor booleano:
extern std::map <char, bool> chutou;

// Armazena os chutes errados:
extern std::vector <char> chutes_errados;

// Função responsável por receber os chutes do usuário e imprimir mensagens a partir dos chutes:
void recebimento_dos_chutes(){

    setlocale(LC_ALL, "Portuguese");

    std::cout << "Digite o seu chute: ";
            char chute;
            std::cin >> chute;
            chute = toupper(chute);

            chutou[chute] = true;

            std::cout << "O seu chute foi: " << chute << std::endl;

            if(letra_existe(chute)){
                std::cout << "A letra chutada existe na palavra." << std::endl;
            }
            else{
                std::cout << "A letra chutada não existe na palavra." << std::endl;
                chutes_errados.push_back(chute);
            }
            std::cout << std::endl;

}
