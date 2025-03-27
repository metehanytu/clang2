// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float credit;
    float grade;
} Ders;

double weightedMean(Ders d1, Ders d2, Ders d3) {
    float toplam = d1.credit * d1.grade + d2.credit * d2.grade + d3.credit * d3.grade;
    
    float krediToplami = d1.credit + d2.credit + d3.credit;
    
    return toplam / krediToplami;
}

int main() {
    Ders ders1;
    Ders ders2;
    Ders ders3;
    
    ders1.credit = 5;
    ders1.grade = 100;
    
    ders2.credit = 4;
    ders2.grade = 90;
    
    ders3.credit = 10;
    ders3.grade = 80;
    
    
    printf("%f", weightedMean(ders1, ders2, ders3));
}
