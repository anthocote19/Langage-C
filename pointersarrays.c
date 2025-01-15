#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int taille, i, max;
    printf("Entrez la taille du tableau : ");
    scanf("%d", &taille);

    if (taille <= 0) {
        printf("La taille doit être un entier positif.\n");
        return 1;
    }
    int *tableau = (int *)malloc(taille * sizeof(int));
    if (tableau == NULL) {
        printf("Erreur d'allocation mémoire.\n");
        return 1;
    }

    srand(time(NULL));
    printf("Tableau généré : ");
    for (i = 0; i < taille; i++) {
        tableau[i] = rand() % 100; 
        printf("%d ", tableau[i]);
    }
    printf("\n");
    max = tableau[0];
    for (i = 1; i < taille; i++) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    printf("Le maximum du tableau est : %d\n", max);
    free(tableau);

    return 0;
}
