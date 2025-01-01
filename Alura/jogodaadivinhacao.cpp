#include <iostream>
#include <locale.h>

using namespace std;

int main () {

    setlocale(LC_ALL, "Portuguese");

    cout << "*************************************" << endl;
    cout << "* Bem-vindo(a) ao jogo da adivinhação! *" << endl;
    cout << "*************************************" << endl;

    int numero_secreto = 42;
    cout << "O número secreto é " << numero_secreto << ". Não conte para ninguém!" << endl;

    int chute;
    cin >>  chute;
    cout <<"O valor do seu chute é "<< chute << endl;

}