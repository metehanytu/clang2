#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen ("dosya.txt", "w+")) == NULL) {
         printf("Dosya açma hatası!");
         exit(1);
    }

    printf("1-Dosyanin su an konumu: %ld\n", ftell(fp));

    fputs("Programlama", fp);

    printf("2-Dosyanin su an konumu: %ld\n", ftell(fp));
	
    rewind(fp);

    printf("3-Dosyanin aktif konumu: %ld", ftell(fp));	
    
    fputs("Yazılım", fp);

    fclose(fp);

    return 0;
}
