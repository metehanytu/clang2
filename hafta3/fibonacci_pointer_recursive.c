#include <stdio.h>

void fibonacci(int n, int *result) {
    if (n == 0) {
        *result = 0;
        return;
    }
    if (n == 1) {
        *result = 1;
        return;
    }
    int a, b;
    fibonacci(n - 1, &a);
    fibonacci(n - 2, &b);
    *result = a + b;
}

int main() {
    int n = 6, result;
    fibonacci(n, &result);
    printf("Fibonacci(%d): %d\n", n, result);
    return 0;
}
