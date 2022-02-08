#include <stdio.h>
#include <string.h>

int main(void){
    char mdp[30];
    printf("Entrez un mot de passe :\n");
    scanf("%s", mdp);
    int maj;
    int chiffre;
    if(strlen(mdp) == 3){
        for(int i = 0 ; i < 4 ; i++){
            int ascii = mdp[i];
            if(ascii >= 41 && ascii <= 90){
                maj = maj + 1;
            }
            if(ascii >= 48 && ascii <= 59){
                chiffre = chiffre + 1;
            }
        }
    }
    else{
        printf("Le mot de passe doit contenir trois caractère précisement");
    }

    if(chiffre >= 1 && maj >= 1){
        printf("Mot de passe accepte");
    }
    else{
        printf("Le mot de passe doit contenir au moins un maj et un chiffre");
    }
}