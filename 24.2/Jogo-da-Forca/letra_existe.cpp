#include <string>
#include <locale.h>

// Seta a palavra secreta:
extern std::string palavra_secreta;

// Fun??o que diz se a letra chutada existe ou n?o na palavra secreta:
bool letra_existe(char chute){

    setlocale(LC_ALL, "Portuguese");

    /* Outra forma de executar a intera??o e verifica??o:
    for(int i = 0; i < palavra_secreta.size(); i++ ){
        if(chute == palavra_secreta[i]){
            return true;
        }
    }*/

        for (char letra : palavra_secreta){
            if (chute == letra){
                return true;
            }
        }
        return false;
    }
