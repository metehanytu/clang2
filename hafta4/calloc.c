#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Kaç elemanlı bir dizi oluşturmak istiyorsunuz? ");
    scanf("%d", &n);

    int *arr = (int*) calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Bellek tahsis hatası!\n");
        return 1;
    }

    printf("Başlangıçta tüm elemanlar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("%d eleman giriniz:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Güncellenmiş dizi: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
