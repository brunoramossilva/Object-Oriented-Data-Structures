#include "produto.h"
#include <iostream>
using namespace std;

int Produto::quantidade = 0;

Produto::Produto(long id, const string& nome, double valor)
{
    setId(id);
    setNome(nome);
    setValor(valor);
    ++quantidade;
    cout << "O produto " << nome << " foi criado.\n"
         << "Este e o " << quantidade << " produto." << endl;
}

Produto::Produto(const Produto& p)
    : id(p.id), nome(p.nome), valor(p.valor)
{
    ++quantidade;
    cout << "Uma copia do produto " << nome << " foi feita.\n"
         << "Este e o " << quantidade << " produto." << endl;
}

Produto::~Produto()
{
    cout << "O produto " << nome << " foi destruido.\n"
         << "Agora temos " << --quantidade << " produtos restantes." << endl;
}

void Produto::exibir()
{
    cout << "Produto: " << nome << ", ID: " << id << ", Valor: " << valor << endl;
}
