#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <locale.h>
#include "le_arquivo.hpp"
#include "salva_arquivo.hpp"

// Fun��o respons�vel por adicionar a nova palavra na lista, caso o jogador ven�a o jogo:
void adiciona_palavra(){

    setlocale(LC_ALL, "Portuguese");

    std::cout << "Digite a nova palavra: ";
    std::string nova_palavra;
    std::cin >> nova_palavra;

    // Transforma a nova palavra para caixa alta, caso o usu�rio a tenha digitado utilizando letras min�sculas:
    for (char &c : nova_palavra){
        c = toupper(c);
    }

    std::vector<std::string> lista_de_palavras = le_arquivo();
    lista_de_palavras.push_back(nova_palavra);

    salva_arquivo(lista_de_palavras);

}
