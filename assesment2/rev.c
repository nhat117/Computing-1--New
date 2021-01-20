#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAX 100
// Swap function
void swap(char *s, char *end) {
	char *tmp;
	*tmp = *s;
	*s = *end;
	*end = *tmp;
}

// s is the last 

void rev(char *s,int len) {
	if(len <= 1) { // If str = 0 or only 1 char then do nothing
		return;
	} else {
		swap(s, s + len -1); //start +len -1 make the pointer to the last position
		rev(++s, len - 2);
	}

}

int main(void) {
	char *s;
	s = malloc(MAX);
	printf("Enter string: ");
	scanf("%s", s);
	rev(s,strlen(s));
	printf("%s", s);
}

// Recursion is simplicity, if do alot forr Recursion you must review.
// Determine the parameter is important, selecting good parameter is the key