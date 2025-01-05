#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

int main () {

    setlocale(LC_ALL, "Portuguese");

    cout << "*************************************" << endl;
    cout << "* Bem-vindo(a) ao jogo da adivinhação! *" << endl;
    cout << "*************************************" << endl;

    cout << "Em qual dificuldade você deseja jogar?" << endl;
    cout << "Defina a dificuldade digitando a letra correspondente que está dentro dos parênteses:" << endl;
    cout << "Fácil (F) | Média (M) | Difícil (D)" << endl;

    char dificuldade;
    cin >> dificuldade;

    string dificuldade_escolhida;

    int numero_de_tentativas;

    if (dificuldade == 'F' || dificuldade == 'f'){
        numero_de_tentativas = 12;
        dificuldade_escolhida = "Fácil";
    }
        else if(dificuldade == 'M' || dificuldade == 'm'){
            numero_de_tentativas = 10;
            dificuldade_escolhida = "Média";
        }
        else if (dificuldade == 'D' || dificuldade == 'd') {
            numero_de_tentativas = 8;
            dificuldade_escolhida = "Difícil";
        }
        else {
        cout << "Dificuldade Inválida!" << endl;
        return 1;
        }

    cout << "Você selecionou a dificuldade " << dificuldade_escolhida << ". Boa sorte!" << endl;

    const int NUMERO_SECRETO = 1;

    bool nao_acertou = true;

    int tentativas = 0;

    double pontos = 1000;

    for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++)
    {
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
        }

        else if (maior)
        {
        cout << "O valor do seu chute é maior do que o valor do número secreto." << endl;
        }
        else { cout << "O valor do seu chute é menor do que o valor do número secreto." <<endl;}   
    }

    cout << "Fim do Jogo!" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Pontuação Final: " << pontos << " Pontos."  << endl;

}
