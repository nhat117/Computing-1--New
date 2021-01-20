#include <stdio.h>
#include <stdlib.h>

void sumint(int *input, int *sum) {
	if(*input < 1)
		return;
	*sum += *input % 10;
	int k = *input/ 10;
	sumint(&k, sum);
}

int main(void) {
	int input,sum = 0;
	printf("Enter int: ");
	scanf("%d", &input);
	sumint(&input, &sum);
	printf("%d",sum);
}
