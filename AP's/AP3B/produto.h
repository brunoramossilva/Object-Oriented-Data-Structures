#ifndef _PRODUTO_H_
#define _PRODUTO_H_
#include <string>
using namespace std;

class Produto
{
private:
    long id;
    string nome;
    double valor;
    static int quantidade;

public:
    Produto(long id=0, const string& nome="Desconhecido", double valor=0.0);
    Produto(const Produto& outroProduto);
    ~Produto();
    void exibir();

    const string& getNome() const { return nome; }
    long getId() const { return id; }
    double getValor() const { return valor; }
    static int getQuantidade() { return quantidade; }

    bool setNome(const string& s)
    {
        if (s.size() < 1)
            return false;
        nome = s;
        return true;
    }

    void setId(long n) { id = n; }
    void setValor(double v) { valor = v > 0.0 ? v : 0.0; }
};

#endif
