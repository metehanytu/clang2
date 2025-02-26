#include <stdio.h>

void update(int *p) {
    *p = (*p) * 2;
}

int main() {
    int num = 5;
    update(&num); // num'un adresini gönderiyoruz
    printf("%d", num); // Çıktı: 10
    return 0;
}
