// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float credit;
    float grade;
} Ders;

double weightedMean(Ders *d, int length) {
    int i;
    float toplam = 0;
    float krediToplam = 0;
    
    
    for (i = 0; i < length; i++) {
        toplam += d[i].credit * d[i].grade;
        krediToplam += d[i].credit;
    }
    
    return toplam / krediToplam;
}

int main() {
    Ders ders[5];
    
    ders[0].credit = 5;
    ders[0].grade = 50;
    
    ders[1].credit = 4;
    ders[1].grade = 50;
    
    ders[2].credit = 1;
    ders[2].grade = 100;
    
    printf("%f", weightedMean(ders, 3));
}
