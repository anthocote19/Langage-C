#include <stdio.h>
#include <math.h>

int main() {
    double base, puissance, resultat;
    printf("Entrez la base : ");
    scanf("%lf", &base);
    printf("Entrez la puissance : ");
    scanf("%lf", &puissance);
    resultat = pow(base, puissance);
    printf("%.2lf à la puissance %.2lf = %.2lf\n", base, puissance, resultat);

    return 0;
}

