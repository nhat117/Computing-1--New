/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020C
  Assignment: 2
  Author: Nhat Minh BUI
  ID: s3878174
  Created  date: 04/01/2021
  Acknowledgement:https://www.tutorialspoint.com/c-program-to-reverse-array-of-strings, repl.it/@nhat117/week5/ex3
*/
#include<stdio.h>
#include <stdlib.h>
#include <string.h>

// Variable declaration 
#define MAX 100
char rev[100];

void revstr (char *str, int start ,int lastindex) {
	// Base case 
	if (lastindex < 0) {
		//chrtmp = str[0];
		str[lastindex] = rev[start];
		rev[start] = '\0';
        return;
	}
	// Switch part
	rev[start] = str[lastindex];
	// Recursion function
	// Debug: 
	//printf("start %d, lastindex %d rev %s \n", start, lastindex, rev);
	revstr( str, start + 1 , lastindex - 1);
}

int main (void) {
	char str[MAX] = {'\0'};
	printf("Enter a string : ");
	scanf("%[^\n]s", str);

	int start = 0;
	int lastindex = strlen(str) - 1  ;
    printf("%d\n", lastindex);
	revstr(str, start, lastindex);
	printf("%s", rev); // Potential ERROR

	return 0;
}


 