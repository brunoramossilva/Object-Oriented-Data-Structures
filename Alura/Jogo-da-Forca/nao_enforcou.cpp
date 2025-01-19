#include <vector>
#include <locale.h>

// Armazena os chutes errados:
extern std::vector <char> chutes_errados;

// Fun��o que retorna se a pessoa j� excedeu o n�mero m�ximo de tentativas:
bool nao_enforcou(){

    setlocale(LC_ALL, "Portuguese");

    return chutes_errados.size() < 5;
}
