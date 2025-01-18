#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <locale.h>

using namespace std;

// Seta a palavra secreta:
string palavra_secreta;


// Verifica se a letra foi chutada e a converte para um valor booleano:
map <char, bool> chutou;

// Armazena os chutes errados:
vector <char> chutes_errados;

// Função que diz se a letra chutada existe ou não na palavra secreta:
bool letra_existe(char chute){

    /* Outra forma de executar a interação e verificação: */
    /*for(int i = 0; i < palavra_secreta.size(); i++ ){
        if(chute == palavra_secreta[i]){
            return true;}*/

        for (char letra : palavra_secreta){
            if (chute == letra){
                return true;
            }

        }
        return false;
    }

// Função que retorna se a pessoa já acertou:
bool nao_acertou(){
    for (char letra : palavra_secreta){
        if (!chutou[letra]){
            return true;
        }
    }
    return false;
}

// Função que retorna se a pessoa já excedeu o número máximo de tentativas:
bool nao_enforcou(){
    return chutes_errados.size() < 5;
}

// Função responsável por imprimir o cabeçalho do jogo:
void imprime_cabecalho(){

    cout << endl;
    cout << "******************************************************" << endl;
    cout << "*-*-*-*-*-* Bem-Vindo(a) ao Jogo da Forca -*-*-*-*-*-" << endl;
    cout << "******************************************************" << endl;
    cout << endl;

}

// Função responsável por imprimir os chutes errados:
void verificacao_de_chutes_errados(){

    cout << "******************************************************" << endl;
    cout << "-*-*-*-*-*-*-*-*-* Chutes Errados -*-*-*-*-*-*-*-*-*-*" << endl;
    for (char letra : chutes_errados){
        cout << " " << letra << " |";
    }
    cout << endl;
    cout << "******************************************************" << endl;
    cout << endl;

}

// Função responsável por imprimir a palavra secreta conforme os chutes forem sendo dados:
void impressao_da_palavra(){

    for (char letra : palavra_secreta){
                if (chutou[letra]){
                    cout << letra << " ";
                }
                else {
                    cout << "_ ";
                }
            }
            cout << endl;

}

// Função responsável por receber os chutes do usuário e imprimir mensagens a partir dos chutes:
void recebimento_dos_chutes(){

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

vector <string> le_arquivo(){

    ifstream arquivo;
    arquivo.open("palavras.txt");

    int quantidade_de_palavras;
    arquivo >> quantidade_de_palavras;

    vector <string> palavras_do_arquivo;

    for (int i = 1; i < quantidade_de_palavras + 1 ; i++){
        string palava_lida;
        arquivo >> palava_lida;

        palavras_do_arquivo.push_back(palava_lida);
    }
    return palavras_do_arquivo;
}

void sorteia_palavra(){
    vector<string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}

// main do código:
int main(){

    imprime_cabecalho();

    le_arquivo();

    sorteia_palavra();

    setlocale(LC_ALL, "Portuguese");

    while (nao_acertou() && nao_enforcou()){

        verificacao_de_chutes_errados();

        impressao_da_palavra();

        recebimento_dos_chutes();
        
    }

    cout << "-*-*-*-*-* Fim de Jogo! -*-*-*-*-*" << endl;
    cout << endl;

    // Verifica se a pessoa venceu ou perdeu e imprime as mensagens respectivas:
    if (nao_acertou()){
        cout << "Você perdeu! Tente novamente." << endl;
    }
    else {
        cout << "Parabéns, você venceu!" << endl;
    }

    cout << "A palavra secreta era: " << palavra_secreta << "." << endl;

    }
