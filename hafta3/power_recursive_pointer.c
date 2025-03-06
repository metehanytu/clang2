#include <stdio.h>

void power(int base, int exp, int *result) {
    if (exp == 0) {
        *result = 1;
        return;
    }
    power(base, exp - 1, result);
    *result *= base;
}

int main() {
    int base = 2, exp = 3, result;
    power(base, exp, &result);
    printf("%d^%d = %d\n", base, exp, result);
    return 0;
}
