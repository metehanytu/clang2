#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, extra;
    printf("Başlangıçta kaç elemanlı bir dizi oluşturmak istiyorsunuz? ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Bellek tahsis hatası!\n");
        return 1;
    }

    printf("%d eleman giriniz:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Diziyi kaç eleman genişletmek istersiniz? ");
    scanf("%d", &extra);

    arr = (int*) realloc(arr, (n + extra) * sizeof(int));
    if (arr == NULL) {
        printf("Bellek yeniden tahsis edilemedi!\n");
        return 1;
    }

    printf("Yeni %d eleman giriniz:\n", extra);
    for (int i = n; i < n + extra; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Güncellenmiş dizi: ");
    for (int i = 0; i < n + extra; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
