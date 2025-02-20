#include <stdio.h>

// Girdi: arr[] dizisi ve eleman sayısı n
// Çıktı: Dizinin en büyük elemanı
int findMax(int arr[], int n);

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int n = 5;
    printf("Max element: %d\n", findMax(arr, n));
    return 0;
}
