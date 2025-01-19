#include <string>
#include <map>

// Seta a palavra secreta:
std::string palavra_secreta;

// Verifica se a letra foi chutada e a converte para um valor booleano:
std::map <char, bool> chutou;

// Função que retorna se a pessoa já acertou:
bool nao_acertou(){
    for (char letra : palavra_secreta){
        if (!chutou[letra]){
            return true;
        }
    }
    return false;
}
