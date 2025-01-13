#include <stdio.h>

int main() {
    printf("x | y | x ⇒ y\n");
    printf("--|---|-------\n");
    for (int x = 0; x <= 1; x++) {
        for (int y = 0; y <= 1; y++) {
            printf("%d | %d |   %d\n", x, y, (!x || y));
        }
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main() {
    printf("x | y | x ⇔ y\n");
    printf("--|---|-------\n");
    for (int x = 0; x <= 1; x++) {
        for (int y = 0; y <= 1; y++) {
            printf("%d | %d |   %d\n", x, y, (x == y));
        }
    }
    return 0;
}
