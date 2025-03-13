#include <stdio.h>

void toUppercase(char *str) {
    if (*str == '\0') return;
    if (*str >= 'a' && *str <= 'z') *str -= 32;
    toUppercase(str + 1);
}

int main() {
    char str[] = "hello";
    toUppercase(str);
    printf("Uppercase: %s\n", str);
    return 0;
}
