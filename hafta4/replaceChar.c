#include <stdio.h>

void replaceChar(char *str, char oldChar, char newChar) {
    if (*str == '\0') return;
    if (*str == oldChar) *str = newChar;
    replaceChar(str + 1, oldChar, newChar);
}

int main() {
    char str[] = "hello";
    replaceChar(str, 'l', 'x');
    printf("Modified: %s\n", str);
    return 0;
}
