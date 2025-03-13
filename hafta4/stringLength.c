#include <stdio.h>

int stringLength(char *str) {
    if (*str == '\0') return 0;  // Base case
    return 1 + stringLength(str + 1);
}

int main() {
    char str[] = "hello";
    printf("Length: %d\n", stringLength(str));
    return 0;
}
