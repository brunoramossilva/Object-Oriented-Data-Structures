#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
#include <locale.h>

using namespace std;

const string PALAVRA_SECRETA = "MELANCIA";

map <char, bool> chutou;
vector <char> chutes_errados;

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

bool nao_acertou(){
    for (char letra : PALAVRA_SECRETA){
        if (!chutou[letra]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}

int main(){

    cout << endl;
    cout << "******************************************************" << endl;
    cout << "*-*-*-*-*-* Bem-Vindo(a) ao Jogo da Forca -*-*-*-*-*-" << endl;
    cout << "******************************************************" << endl;
    cout << endl;

    setlocale(LC_ALL, "Portuguese");


    while (nao_acertou() && nao_enforcou()){

        cout << "******************************************************" << endl;
        cout << "-*-*-*-*-*-*-*-*-* Chutes Errados -*-*-*-*-*-*-*-*-*-*" << endl;
        for (char letra : chutes_errados){
            cout << " " << letra << " |";
        }
        cout << endl;
        cout << "******************************************************" << endl;
        cout << endl;

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
            chutes_errados.push_back(chute);
        }
        cout << endl;

    }

    cout << "Fim de Jogo!" << endl;

    if (nao_acertou()){
        cout << "Você perdeu! Tente novamente." << endl;
    }
    else {
        cout << "Parabéns, você venceu!" << endl;
    }

    cout << "A palavra secreta era: " << PALAVRA_SECRETA << "." << endl;

    }
