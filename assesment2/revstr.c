#include <stdio.h>
#include <ctype.h>

#define MAX 100

char* reverese(char *str, int len) {
	int iterator = 0;
	// char revstr[MAX];
	if (len < 2) {
		// do nothing
	} else {
		if (len >= 2) {
			swap(str, str + len - 1);
			reverese(str + 1, len -2 );
			// revstr[iterator] = *str;
		}
	}
	return str;
}


int main(void) {
	char str[MAX] = {};
	char *revstr;
	printf("Enter string: ");
	scanf("%[^\n]s", str);
	revstr = reverese(str);
	printf("%c", *revstr);
	return 0;
}
