#include <stdio.h>

// Girdi: arr[] dizisi ve eleman sayısı n
// Çıktı: Dizideki ilk n elemanların toplamı
int sumArray(int arr[], int n);

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("Array sum: %d\n", sumArray(arr, n));
    return 0;
}
