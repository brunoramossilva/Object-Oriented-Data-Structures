#include <string>

// Seta a palavra secreta:
std::string palavra_secreta;

// Função que diz se a letra chutada existe ou não na palavra secreta:
bool letra_existe(char chute){

    /* Outra forma de executar a interação e verificação:
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
