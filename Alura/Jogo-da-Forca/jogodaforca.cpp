#include <iostream>
#include <string>
#include <locale.h>
using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

bool letra_existe(char chute){
    for(int i = 0; i < PALAVRA_SECRETA.size(); i++ ){
        if(chute == PALAVRA_SECRETA[i]){
            return true;
        }
    }
    return false;
}


int main(){

    setlocale(LC_ALL, "Portuguese");


    cout << PALAVRA_SECRETA << endl;

    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){

        char chute;
        cin >> chute;

        cout << "O seu chute foi: " << chute << endl;

        if(letra_existe(chute)){
            cout << "A letra chutada existe na palavra." << endl;
        }
        else{
            cout << "A letra chutada não existe na palavra." << endl;
        }
    }
}