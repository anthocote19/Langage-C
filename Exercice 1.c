#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Entrez la première valeur : ");
    scanf("%d", &a);
    printf("Entrez la deuxième valeur : ");
    scanf("%d", &b);
    temp = a;
    a = b;
    b = temp;
    printf("Après l'échange :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}


////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez la première valeur : ");
    scanf("%d", &a);
    printf("Entrez la deuxième valeur : ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Après l'échange :\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}
