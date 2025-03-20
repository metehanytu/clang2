#include <stdio.h>
#include <stdlib.h>

void ziple(char *str) {
	int counter = 1;
	
	while(*str != '\0') {
	    char temp = *str;
	    str = str + 1;
	    if (*str == temp) {
	        counter ++;
	    } else {
	        printf("%c", temp);
	        printf("%d", counter);
	        counter = 1;
	    }
	}
}

int main(int argc, char *argv[]) {
    char* str = (char*) malloc(50* sizeof(char));
    scanf("%99s", str);
    ziple(str);
}
