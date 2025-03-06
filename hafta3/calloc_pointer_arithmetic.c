#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = (int*) calloc(5 , sizeof(int));
    p[0] = 1;
    *p = 3;
    p[1] = 2;
    p[2] = *p + *(p+1);
    *(p+3) = 7;
    *(p+3) += 1;
    p[4] = p[0] + *(p+1) + p[2];
    
    printf("p[0] = %d \n", p[0]);
    printf("p[1] = %d \n", p[1]);
    printf("p[2] = %d \n", p[2]);
    printf("p[3] = %d \n", p[3]);
    printf("p[4] = %d \n", p[4]);
    return 0;
}
