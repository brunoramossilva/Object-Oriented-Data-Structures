#include "produto.h"
#include <iostream>

int contador = 0;

Produto::Produto(long id, const std::string& nome, double valor)
{
    setId(id);
    setNome(nome);
    setValor(valor);
    contador++;
    std::cout << "Produto criado: " << nome << ". Total: " << contador << " Produtos.\n";
}

Produto::~Produto()
{
    std::cout << "Produto destruido: " << nome << ". Restam: " << --contador << " Produtos.\n";
}

void Produto::exibir()
{
    std::cout << "ID: " << id << '\n';
    std::cout << "Nome: " << nome << '\n';
    std::cout << "Valor: " << valor << '\n';
}

const std::string& Produto::getNome()
{
    return nome;
}

long Produto::getId()
{
    return id;
}

double Produto::getValor()
{
    return valor;
}

bool Produto::setNome(const std::string& nome)
{
    if (nome.empty()) return false;
    this->nome = nome;
    return true;
}

void Produto::setId(long id)
{
    this->id = id;
}

void Produto::setValor(double valor)
{
    this->valor = (valor > 0) ? valor : 0.0;
}
