#include <stdio.h>

void factorial(int n, int *result) {
    if (n == 0 || n == 1) {
        *result = 1;
        return;
    }
    int temp;
    factorial(n - 1, &temp);
    *result = n * temp;
}

int main() {
    int n = 5, result;
    factorial(n, &result);
    printf("Factorial of %d: %d\n", n, result);
    return 0;
}
