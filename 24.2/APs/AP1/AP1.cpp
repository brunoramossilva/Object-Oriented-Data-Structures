#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Digite um n�mero: ";
    cin >> num;

    if (num > 0) {
        cout << "O n�mero � positivo." << endl;
    } else if (num < 0) {
        cout << "O n�mero � negativo." << endl;
    } else {
        cout << "O n�mero � zero." << endl;
    }

    return 0;
}
