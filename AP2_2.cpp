#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");
    int numero, tentativa, tentativasRestantes;
    char jogarNovamente;

    srand(time(0));

    do {
        numero = rand() % 15 + 1;
        tentativasRestantes = 3;

        while (tentativasRestantes > 0) {
            std::cout << "Tentativa " << (4 - tentativasRestantes) << "/3: ";
            std::cin >> tentativa;

            if (tentativa == numero) {
                std::cout << "Parab�ns! Voc� adivinhou o n�mero corretamente! :)" << std::endl;
                break;
            } else if (tentativa < numero) {
                std::cout << "O n�mero correto � maior." << "\n";
            } else {
                std::cout << "O n�mero correto � menor."<<"\n";
            }

            tentativasRestantes--;

            if (tentativasRestantes == 0) {
                std::cout << "Voc� n�o conseguiu adivinhar o n�mero! :(\nO n�mero correto era: " << numero<<"." << std::endl;
            }
        }

        std::cout << "Deseja jogar novamente? (S/N): ";
        std::cin >> jogarNovamente;

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    std::cout << "Obrigado por jogar!" << std::endl;

    return 0;
}
