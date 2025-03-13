#include <stdio.h>
#include <stdlib.h>

int stringCmp(char *str, char *str2) {
    //strcmp
    //strncmp
    int i;
    
    for(i = 0; i < 50; i++) {
        if (str[i] > str2[i]) {
            return 1;
        } else if (str[i] < str2[i]){
            return -1;
        } else {
            continue;
        }
    }
    
    return 0;
    // eğer str str2'den önce geliyorsa, -1
    // eğer str2 str'den önce geliyorsa 1
    // eğer eşitlerse 0
}

int main() {
    char *str = (char*) calloc(50, sizeof(char));
    char *str2 = (char*) calloc(50, sizeof(char));
    
    
    scanf("%99s", str);
    scanf("%99s", str2);
    
    int cmp = stringCmp(str, str2);
    printf("%d", cmp);
    return 0;
}
