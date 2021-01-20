#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

int punccheck(char *string,int iterator, int ltr) {
	if (*(string + iterator) =='\0') {
		return ltr;
	} 
	if(ispunct(*(string + iterator))) {
		return punccheck(string, iterator + 1,  ltr + 1);
	} else {
		return punccheck(string, iterator + 1,  ltr);
	}
	
}

int lettercheck(char *string,int iterator, int ltr) {
	//Base case
	if (*(string + iterator) =='\0') {
		return ltr;
	} 
	if(isalpha(*(string + iterator))) {
		return lettercheck(string, iterator + 1,  ltr + 1);
	} else {
		return lettercheck(string, iterator + 1,  ltr);
	}
	
}

void ltandpuncchk(char *string) {
	int iterator1 = 0, iterator2 = 0, ltr = 0, punc = 0;
	printf("There is %d punc, %d letter", punccheck(string, iterator1, ltr), lettercheck(string, iterator2, punc));
}

int main () {
	char *string;
	string = malloc(SIZE);
	printf("Enter a string: ");
	scanf("%[^\n]s", string);
	ltandpuncchk(string);
	free(string);
	return 0;
}