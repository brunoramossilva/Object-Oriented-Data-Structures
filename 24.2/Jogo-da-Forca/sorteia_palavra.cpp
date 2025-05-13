#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <locale.h>
#include "le_arquivo.hpp"

// Seta a palavra secreta:
extern std::string palavra_secreta;

/* Fun��o respons�vel por sortear a palavra secreta a partir do arquivo de texto e setar a palavra na vari�vel da palavra secreta.
Al�m disso, a fun��o tamb�m pergunta se o usu�rio deseja acessar o modo desenvolvedor: */
void sorteia_palavra(){

    setlocale(LC_ALL, "Portuguese");

    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];

    std::cout << "Deseja acessar o modo desenvolvedor?\nDigite 'S' para sim ou 'N' para n�o: ";
    char resposta;
    std::cin >> resposta;
    resposta = toupper(resposta);

    if (resposta == 'S'){
    std::cout << std::endl;
    std::cout << "* Modo Desenvolvedor *\nA palavra secreta �: " << palavra_secreta << ".\n";
    }

}
