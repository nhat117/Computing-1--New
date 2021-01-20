#include <stdio.h>
#include <string.h>
#include <ctype.h>
//Global and array declaration;
int count[26] = {0}, x;
char string[100] = {};
const int MAXSIZE = 100;
//Function declaration
void errorhandling(char *string);
void charchec(char *string);
void resprint(int *count);

int main(void) {
	printf("Enter string : ");
	scanf("%[^\n]s", string);
	errorhandling(string);
	charchec(string);
	resprint(count);
}

// Regardless of case
void errorhandling(char *string) {
	for (int iterator = 0; string[iterator] !='\0';iterator ++) {
		string[iterator] = tolower(string[iterator]);
	}
}

//Check to see if the string is in the alphabet letter and pussh in to count array
void charchec(char *string) {
	for (int iterator = 0; string[iterator] != '\0'; iterator ++) {
		if(string[iterator] >= 'a' && string[iterator] <= 'z') {
			x = string[iterator] - 'a';
			count[x] ++;
		}
	}
}

//Print out the result;

void resprint(int *count) {
	for (int iterator = 0; iterator < 26; iterator ++) {
		if (count[iterator] > 0) 
			printf("%c occurs %d. \n", iterator + 'a', count [iterator]);
	}
}
