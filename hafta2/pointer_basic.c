#include <stdio.h>

void update(int *p) {
    *p = (*p) * 2;
}

int main() {
    int num = 5;
    update(&num);
    printf("%d", num);
    return 0;
}
