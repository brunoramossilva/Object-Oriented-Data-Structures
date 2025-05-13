#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto
{
private:
    long id;
    std::string nome;
    double valor;
    
public:
    Produto(long id = 0, const std::string& nome = "Desconhecido", double valor = 0.0);
    ~Produto();
    void exibir();
    const std::string& getNome();
    long getId();
    double getValor();
    bool setNome(const std::string& nome);
    void setId(long id);
    void setValor(double valor);
};

#endif
