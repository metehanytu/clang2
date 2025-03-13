#include <stdio.h>

int countVowels(char *str) {
    if (*str == '\0') return 0;
    return ((*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
             *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') ? 1 : 0)
           + countVowels(str + 1);
}

int main() {
    char str[] = "hello";
    printf("Vowel Count: %d\n", countVowels(str));
    return 0;
}
