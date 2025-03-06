#include <stdio.h>

int sumArray(int *arr, int size) {
    if (size == 0) return 0;
    return arr[size - 1] + sumArray(arr, size - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("Sum of array: %d\n", sumArray(arr, size));
    return 0;
}
