#include <stdio.h>
double puissance(double base, int exposant) {
    if (exposant == 0) {
        return 1; 
    } else if (exposant < 0) {
        return 1 / puissance(base, -exposant);
    } else {
        return base * puissance(base, exposant - 1);
    }
}

int main() {
    double base;
    int exposant;
    printf("Entrez un nombre (base) : ");
    scanf("%lf", &base);
    printf("Entrez un entier (exposant) : ");
    scanf("%d", &exposant);
    double resultat = puissance(base, exposant);
    printf("%.2lf à la puissance %d est %.2lf\n", base, exposant, resultat);

    return 0;
}
