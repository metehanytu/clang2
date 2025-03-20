#include <stdio.h>
#include <stdlib.h>

void collatz(int a) {
    printf("%d\n", a);
    
    if (a == 1) {
        return;
    }
    
	if (a % 2 == 1) {
	    collatz(a*3 + 1);
	} else {
	    collatz(a/2);
	}
}

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	collatz(n);
	
}
