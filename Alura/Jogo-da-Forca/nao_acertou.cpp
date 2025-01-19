#include <string>
#include <map>
#include <locale.h>

// Seta a palavra secreta:
extern std::string palavra_secreta;

// Verifica se a letra foi chutada e a converte para um valor booleano:
extern std::map <char, bool> chutou;

// Fun��o que retorna se a pessoa j� acertou:
bool nao_acertou(){

    setlocale(LC_ALL, "Portuguese");
    
    for (char letra : palavra_secreta){
        if (!chutou[letra]){
            return true;
        }
    }
    return false;
}
