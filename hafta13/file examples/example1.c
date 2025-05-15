#include <stdio.h>

int main() {
    FILE *dosya = fopen("metin.txt", "w"); 

    if (dosya == NULL) {
        printf("Dosya açılamadı!\n");
        return 1;
    }

    fprintf(dosya, "Merhaba Dünya!\n");
    fprintf(dosya, "Bugün hava çok güzel.\n");

    fclose(dosya); // Dosyayı kapat
    return 0;
}
