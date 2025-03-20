#include <stdio.h>
#include <stdlib.h>

int topla(int a, int b) {
	if ((a & b) == 0) {
		return a | b;
	}
	return topla(a ^ b, (a & b) << 1);
}

int main(int argc, char *argv[]) {
	int a = 17;
	int b = 8;
	
	printf("%d", topla(a, b));
	
}
