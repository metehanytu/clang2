#include <stdio.h>
#include <stdlib.h>

void fillArray(int *arr, int N) {
    if (N == 0) return;
    fillArray(arr, N - 1);
    printf("A[%d] = ", N - 1);
    scanf("%d", (arr + N - 1));
}

int sumArray(int *arr, int N) {
    if (N == 0) return 0;
    return *(arr + N - 1) + sumArray(arr, N - 1);
}

int main() {
    int N;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &N);
    int *arr = (int*) calloc(N, sizeof(int));

    fillArray(arr, N);
    int toplam = sumArray(arr, N);
    printf("Dizinin toplamı: %d\n", toplam);
    free(arr);
    return 0;
}
