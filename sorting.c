#include <stdio.h>

int main() {
    float x, y, z, temp;
    printf("Entrez trois nombres réels :\n");
    scanf("%f %f %f", &x, &y, &z);

    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    if (x > z) {
        temp = x;
        x = z;
        z = temp;
    }
    if (y > z) {
        temp = y;
        y = z;
        z = temp;
    }

    printf("Les nombres dans l'ordre croissant sont : %.2f ≤ %.2f ≤ %.2f\n", x, y, z);

    return 0;
}
