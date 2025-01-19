#include <iostream>
#include <string>
#include <map>

// Verifica se a letra foi chutada e a converte para um valor booleano:
std::map <char, bool> chutou;

// Seta a palavra secreta:
std::string palavra_secreta;

// Função responsável por imprimir a palavra secreta conforme os chutes forem sendo dados:
void impressao_da_palavra(){

    for (char letra : palavra_secreta){
                if (chutou[letra]){
                    std::cout << letra << " ";
                }
                else {
                    std::cout << "_ ";
                }
            }
            std::cout << std::endl;

}
