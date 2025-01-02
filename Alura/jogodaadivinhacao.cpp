#include <iostream>
#include <locale.h>

using namespace std;

int main () {

    setlocale(LC_ALL, "Portuguese");

    cout << "*************************************" << endl;
    cout << "* Bem-vindo(a) ao jogo da adivinha��o! *" << endl;
    cout << "*************************************" << endl;

    const int NUMERO_SECRETO = 25;

    bool nao_acertou = true;

    while (nao_acertou)
    {
        int chute;
        cout << "Digite o valor do seu chute: ";
        cin >>  chute;
        cout <<"Valor do seu chute: "<< chute <<"."<< endl;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if (acertou)
        {
            cout << "Parab�ns! Voc� acertou o n�mero secreto." << endl;
            nao_acertou = false;
        }
        else if (maior)
        {
            cout << "O valor do seu chute � maior do que o valor do n�mero secreto." << endl;
        }
        else { cout << "O valor do seu chute � menor do que o valor do n�mero secreto." <<endl; }


}

    cout << "Fim do Jogo!" << endl;

}