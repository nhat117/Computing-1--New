#include <stdio.h>

int main(void) {
	printf("please enter interger that you want to calculate the sum of it digits (0- 999)\n");
	int input_int, remainder;
	int sum = 0;
	scanf("%d", &input_int);
	while(input_int != 0) {
		remainder = input_int % 10;
		sum = sum + remainder;
		input_int = input_int / 10;
		}
	printf(" sum of the digit of %d is %d", input_int, sum);
	return 0;
}