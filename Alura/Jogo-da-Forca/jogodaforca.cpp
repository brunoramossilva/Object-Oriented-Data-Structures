#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <cctype>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <locale.h>
#include "letra_existe.hpp"
#include "nao_acertou.hpp"
#include "nao_enforcou.hpp"
#include "imprime_cabecalho.hpp"
#include "verificacao_de_chutes_errados.hpp"
#include "impressao_da_palavra.hpp"
#include "recebimento_dos_chutes.hpp"
#include "le_arquivo.hpp"
#include "sorteia_palavra.hpp"
#include "salva_arquivo.hpp"
#include "adiciona_palavra.hpp"

using namespace std;

// Seta a palavra secreta:
string palavra_secreta;

// Verifica se a letra foi chutada e a converte para um valor booleano:
map <char, bool> chutou;

// Armazena os chutes errados:
vector <char> chutes_errados;

// Main do c?digo:
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

        cout << "Voc? perdeu! Tente novamente." << endl;
        cout << "A palavra secreta era: " << palavra_secreta << "." << endl;
    }

    else {
        
        cout << "Parab?ns, voc? venceu!" << endl;
        cout << "A palavra secreta era: " << palavra_secreta << "." << endl;
        cout << "Seu pr?mio ? a oportunidade de adicionar uma nova palavra ao banco de dados.\nDeseja fazer? Responda com 'S' para sim ou 'N' para n?o: ";

        char resposta;
        cin >> resposta;

        if (resposta == 'S' || resposta == 's'){
            adiciona_palavra();
        }

    }

    cout << "Obrigado por jogar! At? a pr?xima.";

}
