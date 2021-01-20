#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Find the longest word of string s and store it in string mx to return
// Do not change this function header
char *longest(char *s, char *mx) {    
	// Give a pointer to go through the array of string;
     for (char *p = s; *p !='\0'; p++) {
		 char word [100];
		 char *q;
		 for (q = word; !isspace(*p) && *p !='\0'; q++, p++ ) {
			 *q = *p;
			printf("%s", word);
		}
		*q = '\0'; // mark the end of the string
		// find the longest
		if(strlen(word) > strlen(mx)) {
			strcpy(mx,word);
			
		}
	 }
    return mx;
}

// Do not change anything in this function
int main() {
    char str[100] = {'\0'}, max[100] = {'\0'};
    printf("Enter a string: ");
    scanf("%[^\n]s", str);
    printf("Longest word: %s\n", longest(str, max));
    return 0;
}
