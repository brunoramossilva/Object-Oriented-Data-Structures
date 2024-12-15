#include <iostream>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    std::cout <<"******************************";
    std::cout <<"Bem-vindo ao jogo da adivinhação!";
    std::cout <<"******************************";
}