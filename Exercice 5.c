#include <stdio.h>

int main() {
    char lettre, lettre_chiffree;
    printf("Entrez une lettre (a-z ou A-Z) : ");
    scanf(" %c", &lettre);

    
    if (lettre >= 'a' && lettre <= 'z') {
        lettre_chiffree = ((lettre - 'a' + 3) % 26) + 'a';
    } else if (lettre >= 'A' && lettre <= 'Z') {
        lettre_chiffree = ((lettre - 'A' + 3) % 26) + 'A';
    } else {
        printf("Ce n'est pas une lettre valide.\n");
        return 1;
    }
    printf("Lettre chiffrée : %c\n", lettre_chiffree);

    return 0;
}

