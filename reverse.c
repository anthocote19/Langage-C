#include <stdio.h>

void reverse_array(int arr[], int size) {
    int temp;
    int start = 0;
    int end = size - 1;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int arr[] = {4, 2, 3, 7, 8};
    int size = 5; 
    reverse_array(arr, size);
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
