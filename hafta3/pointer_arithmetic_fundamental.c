#include <stdio.h>
#include <stdlib.h>

int main() {
    int *n = (int*) calloc(5, sizeof(int));
    
    int *c = n+1;
    
    n[1] = 3;
    
    printf("*c=%d\n", *c);
    
    printf("%p\n", n);
    printf("%p\n", n+1);
    printf("%p\n", n+2);
    printf("%p\n", n+3);
    printf("%p\n", n+4);
    
    char *str = (char*) calloc(10, sizeof(char));
    
    printf("\n", str);
    printf("%p\n", str+1);
    printf("%p\n", str+2);
    printf("%p\n", str+3);
    printf("%p\n", str+4);
}
