#include <stdlib.h>
#include <stdio.h>

void swap(int *n1, int *n2) {
	int tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}

int main(void) {
	int num1 , num2;
	printf("Enter num 1 and 2: ");
	scanf("%d %d", &num1, &num2);
	swap(&num1, &num2);
	printf("Value after swap num1 = %d, num 2 = %d", num1, num2);
}