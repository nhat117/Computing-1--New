#include <stdio.h>
#include <string.h>
#define SIZE 10

//Deo lam nhu vay duoc
// s="Hello", S NOW NOT A VARIABLE, NOW AN ARRAT, MUS USE STRCPY

int main() {
	char s[SIZE];
	strcpy(s,"Hello");

	// more efficient
	char *end = s + strlen(s);
	for(char *p = s; p < end; p++) {
		printf("%d, %c\n", *p, *p);
	}

	return 0;

}