#include <vector>
#include <locale.h>

// Armazena os chutes errados:
extern std::vector <char> chutes_errados;

// Função que retorna se a pessoa já excedeu o número máximo de tentativas:
bool nao_enforcou(){

    setlocale(LC_ALL, "Portuguese");

    return chutes_errados.size() < 5;
}
