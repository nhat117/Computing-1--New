#include <stdio.h>

void swap(int num1, int num2) {
	int temp;
	num1 = temp;
	num1 = num2;
	num2 = temp;
	printf("Swap.. Done");
}

int main(void) {
	int num1 = 2;
	int num2 = 5;
	swap( num1, num2);
	printf(" num1 %d num2 %d", num1, num2);
}