#include <stdio.h>
#include <stdlib.h>

int numlength(int num, int iterator) {
	return num < 1 ? iterator : numlength(num / 10, ++iterator);
}
// Split the last digit
int numsplit(int num) {
	return num % 10;
}
// Assign each num after split to the array;
void itos(int num, char *str, int numlength) {
	numlength--; // Array start at 0
	if (num < 1) // Base case
		return;
	*(str + numlength) = numsplit(num) + '0'; // Covert to ascii char
	itos(num /10, str, numlength--); // Recursion
}

int main(void) {
	int num, iterator = 0, k = 0;
	char *str;
	printf("Enter int: ");
	scanf("%d", &num);
	int len = numlength(num, iterator);
	str = malloc(len);
	itos(num, str, len);
	*(str + len) = '\0'; // Use tha last cell to store a null aka string
	printf("%s", str);
}