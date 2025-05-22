#include<stdio.h>
#include<stdlib.h>

main()
{
    FILE *fpt,*fpb;
    int a=65;
    fpt=fopen("a.txt","w");
    fpb=fopen("a.bin","wb");
    
    fprintf(fpt,"%d",a);
    fwrite(&a,sizeof(char),1,fpb);
    
    fclose(fpt);
    fclose(fpb);
    
    return 0;
}
