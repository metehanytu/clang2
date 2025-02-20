#include <stdio.h>

// Girdi: base (taban) ve exponent (üs)
// Çıktı: base^exponent değeri
double power(double base, int exponent);

int main() {
    double base = 2;
    int exponent = 5;
    printf("%.2f^%d = %.2f\n", base, exponent, power(base, exponent));
    return 0;
}
