#include <stdio.h>
#include <string.h>

int isPalindrome(char *str, int left, int right) {
    if (left >= right) return 1;
    if (str[left] != str[right]) return 0;
    return isPalindrome(str, left + 1, right - 1);
}

int main() {
    char str[] = "madam";
    printf("Palindrome: %s\n", isPalindrome(str, 0, strlen(str) - 1) ? "Yes" : "No");
    return 0;
}
