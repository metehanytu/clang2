#include <stdio.h>

void reverseNumber(int n, int *rev) {
    if (n == 0) return;
    *rev = *rev * 10 + (n % 10);
    reverseNumber(n / 10, rev);
}

int main() {
    int n = 12345, rev = 0;
    reverseNumber(n, &rev);
    printf("Reversed number: %d\n", rev);
    return 0;
}
