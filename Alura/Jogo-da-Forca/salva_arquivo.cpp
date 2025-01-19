#include <iostream>
#include <fstream>
#include <locale.h>
#include "salva_arquivo.hpp"

// Função responsável por atualizar a lista de palavras:
void salva_arquivo(std::vector<std::string> nova_lista_de_palavras){

    setlocale(LC_ALL, "Portuguese");

    std::ofstream arquivo;
    arquivo.open("palavras.txt");

    if (arquivo.is_open()){

        arquivo << nova_lista_de_palavras.size() << std::endl;
        for (std::string palavra : nova_lista_de_palavras){
            arquivo << palavra << std::endl;

        }
        arquivo.close();
        std::cout << "Palavra adicionada com sucesso!" << std::endl;
    }
    else{
        std::cout << "Não foi possível acessar o banco de dados.\nContate o administrador do seu sistema." << std::endl ;
        exit(0);
    }

}
