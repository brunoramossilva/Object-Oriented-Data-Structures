#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Digite um número: ";
    cin >> num;

    if (num > 0) {
        cout << "O número é positivo." << endl;
    } else if (num < 0) {
        cout << "O número é negativo." << endl;
    } else {
        cout << "O número é zero." << endl;
    }

    return 0;
}
