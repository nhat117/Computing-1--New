#include <stdio.h>

int fizzle(int N) {
return N == 1 ? 1:  2 + fizzle(N-1);
}

int main(void) {
	printf("%d", fizzle(4));
}