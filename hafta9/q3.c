#include <stdio.h>
void display(int *arr, int size) {
	if (size == 0) return;
	display(arr + 1, size - 1);
	printf("%d ", *arr);
}
int main() {
	int numbers[] = {-5,11, 9, 6, -10};
	display(numbers, 5);
	return 0;
}
