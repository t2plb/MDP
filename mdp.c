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
        for(int i = 0 ; i < strlen ; i++){
            int ascii = mdp[i];
            if(ascii >= 41 && ascii <= 90){
                maj += 1;
            }
            if(ascii >= 48 && ascii <= 59){
                chiffre += 1;
            }
            if(ascii >= 33 && ascii <= 37){
                speciaux += 1;
            }
        }
    }
    else{
        printf("Le mot de passe doit contenir doit contenir au moins 8 caractères");
        return 1;
    }

    if(chiffre >= 1 && maj >= 1){
        printf("Mot de passe accepte");
        return 0;
    }
    else{
        printf("Le mot de passe doit contenir au moins un maj et un chiffre");
        return 2;
    }
}