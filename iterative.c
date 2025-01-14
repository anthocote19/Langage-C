#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter numbers to sum (enter 0 to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%d", &number);
        if (number == 0) {
            break;
        }
        sum += number;
    }

    printf("The sum of the numbers is: %d\n", sum);

    return 0;
}
