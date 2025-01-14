#include <stdio.h>

int main() {
    float montantAchat, remise, montantRemise;
    printf("Entrez le montant de l'achat (en euros) : ");
    scanf("%f", &montantAchat);

    if (montantAchat >= 100 && montantAchat <= 500) {
        remise = 0.05;
    } else if (montantAchat > 500) {
        remise = 0.08;
    } else {
        remise = 0.0;
    }
    montantRemise = montantAchat * remise;

    printf("La remise est de %.2f euros.\n", montantRemise);

    return 0;
}
