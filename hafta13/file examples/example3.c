#include <stdio.h>
#include <string.h>

void tersCevir(char *str) {
    int i = 0, j = strlen(str) - 1;
    while (i < j) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
}

int main() {
    FILE *f = fopen("metin.txt", "w");
    fputs("Yildiz Teknik", f);
    fclose(f);

    f = fopen("metin.txt", "r");
    char icerik[100];
    fgets(icerik, sizeof(icerik), f);
    fclose(f);

    tersCevir(icerik);

    f = fopen("metin.txt", "w");
    fputs(icerik, f);
    fclose(f);

    return 0;
}
