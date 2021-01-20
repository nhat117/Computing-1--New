#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 11
void swap(char *str,int start, int end) {
	char tmp =  *(str +start);
	str[start] = str[end];
	str[end] = tmp;
}
char *strdate(char *src, char *dest) {
	int iterator = 0;
	//copy the content of whole string;
	strcpy(dest, src);

	// Reverse month and day

	while (iterator != 2) {
		swap(dest, iterator + 3, iterator);
		iterator ++;
	}

	// Repalce '\' to ' '
	for(iterator = 0;dest[iterator] != '\0'; iterator ++) {
		if (dest[iterator] =='/')
			dest[iterator] = ' ';
	}
	//Put '\o' at the end of destination string;

	dest[iterator + 1] = '\0';
	return dest;
}

int main(void) {
	char *datein, *dateout;
	datein = malloc(MAX);
	dateout = malloc(MAX);
	printf("Enter a date: ");
	scanf("%s", datein);
	printf("%s", strdate(datein, dateout));
	free(datein);
	free(dateout);
	return 0;
}