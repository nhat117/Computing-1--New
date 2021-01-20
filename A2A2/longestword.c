#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

char *longest(char *string, char *mx) {
	for (char *p = string; *p != '\0'; ++p) {
		char word[SIZE];
		char *q;
		for (q = word; !isspace(*p) && (*p != '\0'); ++p, ++q) {
			*q = *p;
		}
		 	*q = '\0';
		if (strlen(word) > strlen(mx)) {
			strcpy(mx,word);
		}
	}
	return mx;
}

int main(void) {
	char str[SIZE], max[SIZE] = {};
	printf("Enter string : ");
	scanf("%[^\n]s", str);
	printf("Longest: %s", longest(str, max));
	return 0;
}