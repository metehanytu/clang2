#include <stdio.h>
#include <stdlib.h>

void factor(int n, int* arr, int size) {
    if (n == 1) {
        return;
    }
    
    int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    
    int i;
    
    for (i = 0; i < 10; i ++) {
        if (n % primes[i] == 0) {
            n /= primes[i];
        } else {
            continue;
        }
        
        arr[size-1] = primes[i];
        size ++;
        arr = (int*) realloc(arr, size * sizeof(int));
       
        factor(n, arr, size);
        return;
    }
    
}

int main() {
    int n = 56;
    
    int *arr = (int *) malloc (sizeof(int));
    factor(n, arr, 1);
    
    int i;
    for (i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    // arr = {2, 2, 2, 7}
    
    return 0;
}
