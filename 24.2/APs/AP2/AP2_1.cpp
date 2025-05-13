#include <iostream>
#include <cmath>
using namespace std;

int main() {

    setlocale(LC_ALL, "Portuguese");

    double num1 = 4, num2 = 12.25, num3 = 0.0121;
    double raiz1 = std::sqrt(num1);
    double raiz2 = std::sqrt(num2);
    double raiz3 = std::sqrt(num3);
    double numero, raizQuadrada;

    std::cout << raiz1 <<"  "
              << raiz2 <<"  "
              << raiz3 << std::endl;

    std::cout << "Digite um número: ";
    std::cin >> numero;

    raizQuadrada = std::sqrt(numero);
    std::cout << "A raiz quadrada de " << numero << " é " << raizQuadrada << std::endl;
    
    return 0;
}
