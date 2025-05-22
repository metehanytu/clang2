#include<stdlib.h>
#include<stdio.h>

struct threeNum {
    int n1,n2,n3;
};

int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;
    
    if((fptr=fopen("C:\program.bin","rb"))==NULL){
        printf("Error! Opening file");
        exit(1);
    }
    
    for(n=1;n<5;++n)
    {
        fread ( &num, sizeof(struct threeNum), 1, fptr);
        printf("1: %d\tn2:%d\tn3:%d",num.n1,num.n2,num.n3);
    }
    
    fclose (fptr);
    return(0);
}
