#include <stdio.h>

void displayMonthName() {
    int month;

    printf("Enter a number between 1 and 12: ");
    if (scanf("%d", &month) != 1) { 
        printf("Invalid input.\n");
        return;
    }

    switch (month) {
        case 1:
            printf("January\n");
            break;
        case 2:
            printf("February\n");
            break;
        case 3:
            printf("March\n");
            break;
        case 4:
            printf("April\n");
            break;
        case 5:
            printf("May\n");
            break;
        case 6:
            printf("June\n");
            break;
        case 7:
            printf("July\n");
            break;
        case 8:
            printf("August\n");
            break;
        case 9:
            printf("September\n");
            break;
        case 10:
            printf("October\n");
            break;
        case 11:
            printf("November\n");
            break;
        case 12:
            printf("December\n");
            break;
        default:
            printf("Invalid number. Please enter a number between 1 and 12.\n");
    }
}

int main() {
    displayMonthName();
    return 0;
}
