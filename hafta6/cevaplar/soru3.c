// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    float real;
    float img;
} Complex;

void printComplexNumber(Complex c) {
    printf("%f+%fi", c.real, c.img);
}

double findNorm(Complex c) {
    return sqrt(c.real * c.real + c.img * c.img);
}

Complex sumOfComplexNumbers(Complex c1, Complex c2) {
    Complex c3;
    
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    
    return c3;
}

Complex multipleOfComplexNumbers(Complex c1, Complex c2) {
    Complex c3;
    
    // (a+bi) (c+di) = (ac - bd) + (ad + bc)i
    
    c3.real = c1.real * c2.real - c1.img * c2.img;
    c3.img = c1.real * c2.img + c1.img * c2.real;
    
    return c3;
}

int main() {
    Complex c1;
    c1.real = 3;
    c1.img = 4;
    
    Complex c2;
    c2.real = 4;
    c2.img = 3;
    
    Complex toplam = multipleOfComplexNumbers(c1, c2);
    printComplexNumber(toplam);
    
}
