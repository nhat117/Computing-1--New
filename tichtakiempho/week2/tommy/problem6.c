#include<stdio.h>

int main(void) {
	printf("Please enter the interger btw 0 and 999 that you want to calculate the sum of all of its digit\n");
	int input_int, remainder, sum =0;
	scanf("%d", &input_int);
	//since 3 digit we do it 3 time
	remainder = input_int / 10;
	sum += remainder;
	input_int /=  10;

	remainder = input_int % 10;
	sum = sum + remainder;
	input_int /= 10;

	remainder = input_int % 10;
	sum = sum + remainder;
	input_int /= 10;

	printf("sum all of the digit of %d is equal to %d", input_int, sum);
	return 0;
}