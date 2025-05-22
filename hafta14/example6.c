#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3] = {1, 5, 6};
    FILE *fptr;

    if ((fptr = fopen("program.bin", "wb")) == NULL) {
        printf("Error! Opening file");
        exit(1);
    }

    fwrite(arr, sizeof(int), 3, fptr);
    fclose(fptr);

    return 0;
}
