#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    char sentence[1000] = "";

    printf("Entrez plusieurs chaînes. Le processus d'entrée s'arrêtera lorsque vous terminerez la phrase avec un point.\n");

    while (1) {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = 0;

        strcat(sentence, input);
        if (sentence[strlen(sentence) - 1] == '.') {
            break;
        }
    }

    printf("\nTexte entier : %s\n", sentence);
    printf("Taille du texte : %zu caractères\n", strlen(sentence));

    return 0;
}
