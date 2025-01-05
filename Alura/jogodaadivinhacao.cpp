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
    cout << "* Bem-vindo(a) ao jogo da adivinha��o! *" << endl;
    cout << "*************************************" << endl;
    cout << " " << endl;


    cout << "Digite o seu nome para iniciarmos o jogo: ";
    string nome;
    cin >> nome;


    cout << " " << endl;


    cout << "Ol�, "<< nome << ". Em qual dificuldade voc� deseja jogar?" << endl;
    cout << "Defina a dificuldade digitando a letra correspondente que est� dentro dos par�nteses:" << endl;
    cout << "F�cil (F) | M�dia (M) | Dif�cil (D) " << endl;

    char dificuldade;
    cin >> dificuldade;
    string dificuldade_escolhida;

    int numero_de_tentativas;

    if (dificuldade == 'F' || dificuldade == 'f'){
        numero_de_tentativas = 12;
        dificuldade_escolhida = "f�cil";
    }

        else if(dificuldade == 'M' || dificuldade == 'm'){
            numero_de_tentativas = 10;
            dificuldade_escolhida = "m�dio";
        }

        else if (dificuldade == 'D' || dificuldade == 'd') {
            numero_de_tentativas = 8;
            dificuldade_escolhida = "dif�cil";
        }

        else {
        cout << "Dificuldade Inv�lida!" << endl;
        return 1;
        }


    cout << "O n�vel de dificuldade escolhido foi o " << dificuldade_escolhida << ". Boa sorte!" << endl;

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;

    bool nao_acertou = true;

    int tentativas = 0;

    double pontos = 1000;


    for (tentativas = 1; tentativas <= numero_de_tentativas; tentativas++)
    {
        cout << " " << endl;
        cout << "Tentativa N� " << tentativas << "." << endl;

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
        cout << "Parab�ns! Voc� acertou o n�mero secreto na " << tentativas << "� tentativa." << endl;
        nao_acertou = false;
        break;
        }

        else if (maior)
        {
        cout << " " << endl;
        cout << "* O valor do seu chute � maior do que o valor do n�mero secreto. *" << endl;
        }

        else {
        cout << " " << endl;     
        cout << "* O valor do seu chute � menor do que o valor do n�mero secreto. *" <<endl;}
    }


    cout << "Fim do Jogo!" << endl;

    if (nao_acertou){
        cout << "Voc� perdeu! Tente novamente." <<endl;
    }

    else {
    cout.precision(2);
    cout << fixed;
    cout << "Pontua��o Final: " << pontos << " Pontos."  << endl;
    }

}
