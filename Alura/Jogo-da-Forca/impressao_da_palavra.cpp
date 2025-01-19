#include <iostream>
#include <string>
#include <map>
#include <locale.h>

// Verifica se a letra foi chutada e a converte para um valor booleano:
extern std::map <char, bool> chutou;

// Seta a palavra secreta:
extern std::string palavra_secreta;

// Fun??o respons?vel por imprimir a palavra secreta conforme os chutes forem sendo dados:
void impressao_da_palavra(){

    setlocale(LC_ALL, "Portuguese");

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
