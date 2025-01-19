#include <iostream>
#include <vector>
#include <string>
#include <fstream>



// Função responsável por ler o arquivo de texto:
std::vector<std::string> le_arquivo(){

    std::ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){

        int quantidade_de_palavras;
        arquivo >> quantidade_de_palavras;

        std::vector <std::string> palavras_do_arquivo;

        for (int i = 1; i < quantidade_de_palavras + 1 ; i++){
            std::string palava_lida;
            arquivo >> palava_lida;

            palavras_do_arquivo.push_back(palava_lida);
        }
        arquivo.close();
        return palavras_do_arquivo;
    }
    else{
        std::cout << "Não foi possível acessar o banco de dados.\nContate o administrador do seu sistema." << std::endl ;
        exit(0);
    }

}
