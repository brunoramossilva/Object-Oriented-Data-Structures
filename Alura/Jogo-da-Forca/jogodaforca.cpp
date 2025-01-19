#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "letra_existe.cpp"
#include "nao_acertou.cpp"
#include "nao_enforcou.cpp"
#include "imprime_cabecalho.cpp"
#include "verificacao_de_chutes_errados.cpp"
#include "impressao_da_palavra.cpp"
#include "recebimento_dos_chutes.cpp"
#include "le_arquivo.cpp"
#include "sorteia_palavra.cpp"
#include "salva_arquivo.cpp"
#include "adiciona_palavra.cpp"

using namespace std;

// Seta a palavra secreta:
string palavra_secreta;

// Verifica se a letra foi chutada e a converte para um valor booleano:
map <char, bool> chutou;

// Armazena os chutes errados:
vector <char> chutes_errados;

// Main do código:
int main(){

    setlocale(LC_ALL, "Portuguese");
    imprime_cabecalho();
    le_arquivo();
    sorteia_palavra();

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
        cout << "A palavra secreta era: " << palavra_secreta << "." << endl;
    }

    else {
        
        cout << "Parabéns, você venceu!" << endl;
        cout << "A palavra secreta era: " << palavra_secreta << "." << endl;
        cout << "Seu prêmio é a oportunidade de adicionar uma nova palavra ao banco de dados.\nDeseja fazer? Responda com 'S' para sim ou 'N' para não: ";

        char resposta;
        cin >> resposta;

        if (resposta == 'S' || resposta == 's'){
            adiciona_palavra();
        }

    }

    cout << "Obrigado por jogar! Até a próxima.";

}
