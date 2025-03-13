#include <stdio.h>

int countOccurrences(char *str, char ch) {
    if (*str == '\0') return 0;
    return (*str == ch ? 1 : 0) + countOccurrences(str + 1, ch);
}

int main() {
    char str[] = "hello";
    printf("Occurrences of 'l': %d\n", countOccurrences(str, 'l'));
    return 0;
}
