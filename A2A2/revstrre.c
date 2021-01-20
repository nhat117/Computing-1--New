#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#include <ctype.h>
#define SIZE 100

void rev (char *start, char *end) {
	char tmp;
	tmp = *start;
	*start = *end;
	*end = tmp;
}

void revstr (char *string, char *start, char *end) {
	if (start > end)
		return;
	rev(start, end);
	revstr(string, ++start, --end);
}

int main (void) {
	char *string, *start;
	string = malloc(SIZE);
	printf("Enter string: ");
	scanf("%[^\n]s", string);
	start = string;
	revstr(string, start, start + strlen(string) - 1);
	printf("%s", string);
	return 0;
}