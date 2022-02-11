#include <stdio.h>
#include <string.h>

int main(void){
    char mdp[30];
    printf("Entrez un mot de passe :\n");
    scanf("%s", mdp);
    int maj;
    int chiffre;
    int speciaux;
    if(strlen(mdp) >= 8){
        for(int i = 0 ; i < strlen(mdp) ; i++){
            int ascii = mdp[i];
            if(ascii >= 65 && ascii <= 90){
                maj += 1;
            }
            if(ascii >= 48 && ascii <= 57){
                chiffre += 1;
            }
            if((ascii >= 33 && ascii <= 47) || ascii == 63){
                speciaux += 1;
            }
        }
    }
    else{
        printf("Le mot de passe doit contenir doit contenir au moins 8 caractères");
        return 1;
    }

    if(chiffre >= 1 && maj >= 1 && speciaux >= 1){
        printf("Mot de passe accepte\n");
        return 0;
    }
    else{
        printf("Le mot de passe doit contenir au moins un maj et un chiffre et un caractère spécial\n");
        return 2;
    }
}