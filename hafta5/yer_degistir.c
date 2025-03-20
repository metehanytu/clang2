#include <stdio.h>
#include <stdlib.h>

void yer_degistir(int* a, int* b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
	
}

int main(int argc, char *argv[]) {
	int a = 2;
	int b = 5;
	yer_degistir(&a,&b);
	printf("a = %d , b = %d", a, b);
	
}
