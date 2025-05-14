#include <stdio.h>
#include <stdlib.h>
int *resize(int *arr, int m) {
   int *temp =(int *) realloc(arr, m * sizeof(int));
   if (temp == NULL) {
   printf("Memory reallocation failed.\n");
   free(arr); // free old memory if realloc fails
   exit(1);
   }
   return temp;
}
int main() {
   int n, i, more, total;
   printf("Enter the number of integers: ");
   scanf("%d", &n);
   int *arr = (int *)malloc(n * sizeof(int));
   if (arr == NULL) {
   printf("Memory allocation failed.\n");
   exit(1);
   }
   printf("Enter %d integers:\n", n);
   for (i = 0; i < n; i++) {
   scanf("%d", &arr[i]);
   }
   printf("How many more integers to add? ");
   scanf("%d", &more);
   total = n + more;
   arr = resize(arr, total);
   printf("Enter %d more integers:\n", more);
   for (i = n; i < total; i++) {
   scanf("%d", &arr[i]);
   }
   printf("All integers:\n");
   for (i = 0; i < total; i++) {
   printf("%d ", arr[i]);
   }
   free(arr);
   return 0;
}
