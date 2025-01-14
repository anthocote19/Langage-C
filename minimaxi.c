#include <stdio.h>

void find_min_max(double arr[], int size, double *min, double *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    double arr[] = {3.2, 1.4, 5.8, 0.9, 4.6};
    int size = 5;
    double min, max;
    find_min_max(arr, size, &min, &max);
    printf("Minimum value: %.2f\n", min);
    printf("Maximum value: %.2f\n", max);

    return 0;
}
