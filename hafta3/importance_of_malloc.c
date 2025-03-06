#include<stdio.h>

int main(void) {
    int x=2;
    int A[x] = {1,2};
}

// Burada 5.  satır C99 ve önceki versiyonlar için hata verecektir. Çünkü x değeri, değişkendir. 
//Arrayler değişken bir uzunluk alamaz. Bu yüzden malloc ve calloc gibi fonksiyonlarla bellek tahsis etme yöntemlerine başvururuz. 
