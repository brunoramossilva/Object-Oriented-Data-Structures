#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <locale.h>

using namespace std;

int main () {

    setlocale(LC_ALL, "Portuguese");

    cout << " " << endl;
    cout << "*************************************" << endl;
    cout << "* Bem-vindo(a) ao jogo da adivinhação! *" << endl;
    cout << "*************************************" << endl;
    cout << " " << endl;


    cout << "Digite o seu nome para iniciarmos o jogo: ";
    string nome;
    cin >> nome;


    cout << " " << endl;


    cout << "Olá, "<< nome << ". Em qual dificuldade você deseja jogar?" << endl;
    cout << "Defina a dificuldade digitando a letra correspondente que está dentro dos parênteses:" << endl;
    cout << "Fácil (F) | Média (M) | Difícil (D) " << endl;

    char dificuldade;
    cin >> dificuldade;
    string dificuldade_escolhida;

    int numero_de_tentativas;

    if (dificuldade == 'F' || dificuldade == 'f'){
        numero_de_tentativas = 12;
        dificuldade_escolhida = "fácil";
    }

        else if(dificuldade == 'M' || dificuldade == 'm'){
            numero_de_tentativas = 10;
            dificuldade_escolhida = "médio";
        }

        else if (dificuldade == 'D' || dificuldade == 'd') {
            numero_de_tentativas = 8;
            dificuldade_escolhida = "difícil";
        }

        else {
        cout << "Dificuldade Inválida!" << endl;
        return 1;
        }


    cout << "O nível de dificuldade escolhido foi o " << dificuldade_escolhida << ". Boa sorte!" << endl;

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;

    bool nao_acertou = true;

    int tentativas = 0;

    double pontos = 1000;


    for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++)
    {
        cout << " " << endl;
        cout << "Tentativa Nº " << tentativas << "." << endl;

        int chute;

        cout << "Digite o valor do seu chute: ";
        cin >>  chute;
        
        cout <<"Valor do seu chute: "<< chute <<"."<< endl;

        double pontos_perdidos = abs((chute - NUMERO_SECRETO)) / 2.0;
        pontos = pontos - pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou)
        {
        cout << "Parabéns! Você acertou o número secreto na " << tentativas << "° tentativa." << endl;
        nao_acertou = false;
        break;
        }

        else if (maior)
        {
        cout << " " << endl;
        cout << "* O valor do seu chute é maior do que o valor do número secreto. *" << endl;
        }

        else {
        cout << " " << endl;     
        cout << "* O valor do seu chute é menor do que o valor do número secreto. *" <<endl;}
    }


    cout << "Fim do Jogo!" << endl;

    if (nao_acertou){
        cout << "Você perdeu! Tente novamente." <<endl;
    }

    else {
    cout.precision(2);
    cout << fixed;
    cout << "Pontuação Final: " << pontos << " Pontos."  << endl;
    }

}
