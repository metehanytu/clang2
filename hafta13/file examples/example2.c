#include <stdio.h>

int main() {
    FILE *dosya = fopen("ornek.txt", "w");

    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    fprintf(dosya, "12 13\n15 16");
    fclose(dosya);
    
    
    FILE *dosya2 = fopen("ornek.txt", "r");
    int sayi;

    if (dosya == NULL) {
        printf("Dosya bulunamadı!\n");
        return 1;
    }

    while (fscanf(dosya2, "%d", &sayi) != EOF) {
        printf("%d\n", sayi);
    }

    fclose(dosya2);
   

    return 0;
}
