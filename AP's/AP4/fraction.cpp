#include "fraction.h"

Fracao::Fracao(long n, long d)
{
    if (d == 0) {
        cerr << "Erro: Divisao por zero!" << endl;
        exit(1);
    }

    if (n < 0) {
        n = -n;
        d = -d;
    }

    numerador = n;
    denominador = d;
}

Fracao operator+(const Fracao& a, const Fracao& b) {
    Fracao temp;
    temp.denominador = a.denominador * b.denominador;
    temp.numerador = a.numerador * b.denominador + b.numerador * a.denominador;
    return temp;
}

Fracao operator-(const Fracao& a, const Fracao& b) {
    Fracao temp = a;
    temp += (-b);
    return temp;
}

Fracao operator*(const Fracao& a, const Fracao& b) {
    Fracao temp;
    temp.numerador = a.numerador * b.numerador;
    temp.denominador = a.denominador * b.denominador;
    return temp;
}

Fracao operator/(const Fracao& a, const Fracao& b) {
    if (b.numerador == 0)
    {
        cerr << "Erro: Divisao por zero!" << endl;
        exit(1);
    }

    Fracao temp;
    temp.numerador = a.numerador * b.denominador;
    temp.denominador = a.denominador * b.numerador;
    if (temp.denominador < 0)
    {
        temp.numerador = -temp.numerador;
        temp.denominador = -temp.denominador;
    }
    return temp;
}

ostream& operator<<(ostream& os, const Fracao& a) {
    os << a.numerador << "/" << a.denominador;
    return os;
}

istream& operator>>(istream& is, Fracao& a) {
    cout << "Digite uma fracao:" << endl;
    cout << "Numerador: ";
    is >> a.numerador;
    cout << "Denominador diferente de 0: ";
    is >> a.denominador;
    if (a.denominador == 0)
    {
        cerr << "Erro: Divisao por zero!" << endl;
        exit(1);
    }
    if (a.denominador < 0)
    {
        a.numerador = -a.numerador;
        a.denominador = -a.denominador;
    }
    return is;
}
