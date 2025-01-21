#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <locale.h>
#include "le_arquivo.hpp"

// Seta a palavra secreta:
extern std::string palavra_secreta;

/* Função responsável por sortear a palavra secreta a partir do arquivo de texto e setar a palavra na variável da palavra secreta.
Além disso, a função também pergunta se o usuário deseja acessar o modo desenvolvedor: */
void sorteia_palavra(){

    setlocale(LC_ALL, "Portuguese");

    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];

    std::cout << "Deseja acessar o modo desenvolvedor?\nDigite 'S' para sim ou 'N' para não: ";
    char resposta;
    std::cin >> resposta;
    resposta = toupper(resposta);

    if (resposta == 'S'){
    std::cout << std::endl;
    std::cout << "* Modo Desenvolvedor *\nA palavra secreta é: " << palavra_secreta << ".\n";
    }

}
