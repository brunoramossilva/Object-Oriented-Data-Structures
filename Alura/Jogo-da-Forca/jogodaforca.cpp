#include <iostream>
#include <string>
#include <map>
#include <cctype>
#include <locale.h>

using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

map<char, bool> chutou;

bool letra_existe(char chute){

    /* Outra forma de executar a interação e verificação: */
    /*for(int i = 0; i < PALAVRA_SECRETA.size(); i++ ){
        if(chute == PALAVRA_SECRETA[i]){
            return true;*/

        for (char letra : PALAVRA_SECRETA){
            if (chute == letra){
                return true;
            }

        }
        return false;
    }


int main(){

    cout << endl;
    cout << "**********************************" << endl;
    cout << "# Bem-Vindo(a) ao Jogo da Forca! #" << endl;
    cout << "**********************************" << endl;
    cout << endl;

    setlocale(LC_ALL, "Portuguese");


    bool nao_acertou = true;
    bool nao_enforcou = true;

    while (nao_acertou && nao_enforcou){
        for (char letra : PALAVRA_SECRETA){
            if (chutou[letra]){
                cout << letra << " ";
            }
            else {
                cout << "_ ";
            }
        }
        cout << endl;

        cout << "Digite o seu chute: ";
        char chute;
        cin >> chute;
        chute = toupper(chute);

        chutou[chute] = true;

        cout << "O seu chute foi: " << chute << endl;

        if(letra_existe(chute)){
            cout << "A letra chutada existe na palavra." << endl;
        }
        else{
            cout << "A letra chutada não existe na palavra." << endl;
        }
        
        cout << endl;
    }
}
