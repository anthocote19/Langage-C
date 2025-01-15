#include <stdio.h>

void permutationCirculaire(double *x, double *y, double *z) {
    double temp = *x;  
    *x = *z;         
    *z = *y;           
    *y = temp;         
}

int main() {
    double x, y, z;
    printf("Entrez la valeur de x : ");
    scanf("%lf", &x);
    printf("Entrez la valeur de y : ");
    scanf("%lf", &y);
    printf("Entrez la valeur de z : ");
    scanf("%lf", &z);
    printf("\nAvant permutation : x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z);
    permutationCirculaire(&x, &y, &z);
    printf("Après permutation : x = %.2lf, y = %.2lf, z = %.2lf\n", x, y, z);

    return 0;
}
