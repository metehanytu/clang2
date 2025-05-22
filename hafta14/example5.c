#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fpt,*fpb;
    int a,b;
    
    fpt=fopen("a.txt","r");
    fpb=fopen("a.bin","rb");
    
    fscanf(fpt,"%d",&a);
    fread(&b,sizeof(int),1,fpb);
    
    printf("\na=%d b=%d\n",a,b);
    fclose(fpt);
    fclose(fpb);
    return 0;
}
