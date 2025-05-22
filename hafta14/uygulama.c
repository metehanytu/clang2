#include<stdio.h>
#include<stdlib.h>

int find_max(int *dizi, int count) {
    int en_buyuk_sayi = *dizi;
    int i;
    
    for (i = 1; i < count; i++) {
        dizi = dizi + 1;
        if (*dizi > en_buyuk_sayi) {
            en_buyuk_sayi = *dizi;
        }
    }
    
    return en_buyuk_sayi;
}

int main()
{
    printf("Kaç sayı girmek istiyorsunuz?");
    int a, i;
    scanf("%d", &a);
    
    int *dizi = (int*) malloc(a * sizeof(int));

    for (i = 0; i < a; i++) {
        printf("sayilarinizi girin: ");
        scanf("%d", &dizi[i]);
    }
    
    int max = find_max(&dizi[0], a);
    
    FILE *fb = fopen("sonuc.dat", "wb");
    
    fwrite(&max, sizeof(int), 1, fb);
    
    fclose(fb);
    free(dizi);
    
    return 0;
}
