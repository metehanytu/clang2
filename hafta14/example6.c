#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3] = {1, 5, 6};  // Örneğin: n=1 için {n, 5*n, 5*n+1}
    FILE *fptr;

    if ((fptr = fopen("program.bin", "wb")) == NULL) {
        printf("Error! Opening file");
        exit(1);
    }

    fwrite(arr, sizeof(int), 3, fptr);  // 3 tane int yazılıyor
    fclose(fptr);

    return 0;
}
