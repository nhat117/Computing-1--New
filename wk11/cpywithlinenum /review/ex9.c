#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 12
char *strdate(char *src, char *dest) {
	int iterator2 = 0;
	// Reverse month and day
	for (int iterator1 = 4; iterator1 == 0; iterator1 --) {
		if(ispunct(*(src + iterator1))) {
			dest[iterator2] = ' ';
		} 
		dest[iterator2] = *(src + iterator1);
		++ iterator2;
	}
	// Cpy year
	for(int iterator1 = iterator2; *(src + iterator1) != '\0'; ++iterator1) {
		if(ispunct(*(src + iterator1))) {
			dest[iterator2] = ' ';
		} 
		dest[iterator2] = src[iterator1];
		iterator2 ++;
	}
	return dest;
}

int main(void) {
	char *datein, *dateout;
	datein = malloc(MAX);
	dateout = malloc(MAX);
	printf("Enter a date: ");
	scanf("%s", datein);
	printf("%s \n", strdate(datein, dateout));
	free(datein);
	free(dateout);
	return 0;
}