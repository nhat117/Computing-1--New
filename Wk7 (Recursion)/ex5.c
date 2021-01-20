#include <stdio.h>

int pow_num(int num, int pow) {
	if( pow == 0) {
		return 1;
	} else if (num == 0) {
		return 0;
	}
return num *pow_num(num, --pow); 
}

int main(void) {
	int num, pow;
	printf("Enter Num And Root: ");
	scanf("%d %d", &num, &pow);
	printf("%d power of %d is %d",num , pow , pow_num(num, pow));
	return 0;
}