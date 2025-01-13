int main() {
    int secondes, heures, minutes, reste;
    printf("Entrez une durée en secondes : ");
    scanf("%d", &secondes);
    heures = secondes / 3600;
    reste = secondes % 3600;
    minutes = reste / 60;
    reste = reste % 60;
    printf("Durée convertie : %d:%d:%d\n", heures, minutes, reste);

    return 0;
}

////////////////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
    int heures, minutes, secondes, total;
    printf("Entrez la durée (heures:minutes:secondes) : ");
    scanf("%d:%d:%d", &heures, &minutes, &secondes);
    total = (heures * 3600) + (minutes * 60) + secondes;
    printf("Durée en secondes : %d\n", total);

    return 0;
}
