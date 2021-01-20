#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100


void swap(char *s, char *end) {
	char tmp;
	tmp = *s;
	*s = *end;
	*end = tmp;
}

void revstr(char *str,int lastind) {
	if(lastind < 0) 
		return;
	else {
		swap(str, str + lastind - 1);
		revstr(++str, lastind -2);
	}
}

int main(void) {
	char *str;
	str = malloc(SIZE);
	printf("Enter string: ");
	scanf("%s", str);
	revstr(str, strlen(str));
	printf("%s", str);
}