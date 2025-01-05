#include <iostream>
#include <locale.h>

using namespace std;

int main () {

    setlocale(LC_ALL, "Portuguese");

    cout << "*************************************" << endl;
    cout << "* Bem-vindo(a) ao jogo da adivinha��o! *" << endl;
    cout << "*************************************" << endl;

    const int NUMERO_SECRETO = 48;

    bool nao_acertou = true;

    int tentativas = 0;

    double pontos = 1000;

    while (nao_acertou)
    {
        tentativas++;
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
        }

        else if (maior)
        {
        cout << "O valor do seu chute � maior do que o valor do n�mero secreto." << endl;
        }
        else { cout << "O valor do seu chute � menor do que o valor do n�mero secreto." <<endl;}   
    }

    cout << "Fim do Jogo!" << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Pontua��o Final: " << pontos << " Pontos."  << endl;

}
