#include <stdio.h>

int main (void) {
	char arr[2] = {};
	printf("Please input a letter: \n");
	scanf("%c", &arr[0]);
	if (arr[0] > 64 && arr[0] <91) {
		printf("The input character is an upper case");
	} else { 
		printf("The input character is lower case");
	}
	return 0;
}