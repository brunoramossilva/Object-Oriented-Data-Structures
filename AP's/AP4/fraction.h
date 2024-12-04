#ifndef _FRACTION_
#define _FRACTION_

#include <iostream>
#include <cstdlib>
using namespace std;

class Fracao
{
private:
    long numerador, denominador;

public:
    Fracao(long n = 0, long d = 1);
    Fracao operator-() const {
        return Fracao(-numerador, denominador);
    }
    Fracao& operator+=(const Fracao& a)
    {
        numerador = a.numerador * denominador + numerador * a.denominador;
        denominador *= a.denominador;
        return *this;
    }
    Fracao& operator-=(const Fracao& a)
    {
        *this += (-a);
        return *this;
    }
    Fracao& operator++()
    {
        numerador += denominador;
        return *this;
    }
    Fracao& operator--()
    {
        numerador -= denominador;
        return *this;
    }
    friend Fracao operator+(const Fracao&, const Fracao&);
    friend Fracao operator-(const Fracao&, const Fracao&);
    friend Fracao operator*(const Fracao&, const Fracao&);
    friend Fracao operator/(const Fracao&, const Fracao&);
    friend ostream& operator<<(ostream& os, const Fracao& a);
    friend istream& operator>>(istream& is, Fracao& a);
};

#endif
