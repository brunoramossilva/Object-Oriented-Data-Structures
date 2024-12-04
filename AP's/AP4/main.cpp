#include "fraction.h"
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    Fracao a(1, 3), b(4);
    cout << "Alguns resultados do teste:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "--a = " << --a << endl;
    cout << "++a = " << ++a << endl;
    a += Fracao(1, 2);
    cout << "a += 1/2; a = " << a << endl;
    a -= Fracao(1, 2);
    cout << "a -= 1/2; a = " << a << endl;
    cout << "-b = " << -b << endl;
    cout << "Agora, digite uma entrada:" << endl;
    cin >> a;
    cout << "Sua entrada: " << a << endl;
    return 0;
}
