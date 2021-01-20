//Repalce lower by upper
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

void switchcase(char *string) {
	for(int iterator = 0; *(string +iterator) != '\0'; iterator ++ ) {
		if (!isupper(string[iterator])) {
			*(string + iterator) = toupper(*(string+iterator));
		} else {
			*(string + iterator) = tolower(*(string+iterator));
		}
	}
}
void printstr(char *string, int iterator) {
	if (iterator == strlen(string)) {
		printf("%c", string[iterator]);
		return;
	}
	printf("%c", string[iterator]);
	printstr(string, iterator + 1);
}

int main(void) {
	char *string;
	int iterator = 0;
	string = malloc(MAX);
	printf("Enter string: ");
	scanf("%[^\n]s",string);
	switchcase(string);
	printstr(string, iterator);
}