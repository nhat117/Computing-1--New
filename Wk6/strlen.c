#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int strl(char *st) {
	if(*st == '\0')
		return 0;
	return 1 + strl(st +1);
}

int main(void) {
	char *str;
	str = malloc(SIZE);
	printf("Enter string: ");
	scanf("%s", str);
	printf("%s", str);
	printf("%d", strl(str));
	return 0;
}