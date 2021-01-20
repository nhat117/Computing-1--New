#include <stdio.h>


int main (void) {
	char arr_string[100] = {};
	printf("Please enter a string:\n");
	fgets(arr_string, 99, stdin);

	// write a function that can count the length of an input string
	int count = 0 ;
	for (int i = 0; arr_string[i] != '\0'; i++) {
		 count ++;	
	} 
	printf("%d", count - 1);
	return 0;
}