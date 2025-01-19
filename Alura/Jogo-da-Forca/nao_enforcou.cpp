#include <vector>

// Armazena os chutes errados:
std::vector <char> chutes_errados;

// Função que retorna se a pessoa já excedeu o número máximo de tentativas:
bool nao_enforcou(){
    return chutes_errados.size() < 5;
}
