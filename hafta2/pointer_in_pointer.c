#include <stdio.h>

int main(int argc, char** argv) {
    int k = 5;
    int *p_k = &k;
    int **pp_k = &p_k;

    printf("k'nin değeri: %d\n", k);

    printf("k'nin adresi: %p\n", (void *)&k);

    printf("p_k'nin değeri (işaret ettiği adres): %p\n", (void *)p_k);

    printf("p_k'nin adresi: %p\n", (void *)&p_k);

    printf("p_k tarafından referanslanan değer: %d\n", *p_k);

    printf("pp_k'nin değeri (işaret ettiği adres): %p\n", (void *)pp_k);

    printf("'pp_k' tarafından referanslanan değer (p_k'nin adresi): %p\n", (void *)*pp_k);

    printf("pp_k tarafından dolaylı olarak referanslanan değer (k'nin değeri): %d\n", **pp_k);

    return 0;
}
