#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Kaç elemanlı bir dizi istiyorsunuz? ");
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

    printf("Girilen sayılar: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
