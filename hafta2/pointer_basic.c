#include <stdio.h>

void f1(int p) {
    p = p * 2;
}

void f2(int *p) {
    *p = (*p) * 2;
}

int main() {
    int num = 5;
    f1(num);
    printf("%d\n", num);
    f2(&num);
    printf("%d\n", num);
    return 0;
}

