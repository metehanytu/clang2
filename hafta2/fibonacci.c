#include <stdio.h>

// Girdi: n'inci Fibonacci sayısını hesaplamak için bir tamsayı n
// Çıktı: n'inci Fibonacci sayısı
int fibonacci(int n);

int main() {
    int n = 10;
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    return 0;
}
