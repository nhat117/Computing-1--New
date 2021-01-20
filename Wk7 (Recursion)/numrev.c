#include<stdio.h>

int p1(int iterator) {
	return iterator == 0 ? 1 : 10 * p1(--iterator) ;
	
}

int countdigt(int iterator, int num) {
	return num <= 1 ? iterator : countdigt(++iterator, num/10);
}

int numrev(int num) {
	int rev = 0, iterator = 0;
	iterator = countdigt(iterator, num);
	// reverse
	while(iterator >= 0) {
		rev += (num % 10) * p1(iterator);
		num /= 10;
		iterator--;
	}
	return rev;
}

int main(void) {
	int num;
	printf("Enter a num : ");
	scanf("%d", &num);
	printf("%d", numrev(num));
	return 0;
}