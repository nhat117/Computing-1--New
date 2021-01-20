/*
  RMIT University Vietnam
  Course: EEET2601 Engineering Computing 1
  Semester: 2020C
  Assignment: 2
  Author: Nhat Minh BUI
  ID: s3878174
  Created  date: 04/01/2021
  Acknowledgement: https://rmit.instructure.com/courses/82917/files/16070237/download?wrap=1, https://www.tutorialspoint.com/print-longest-palindrome-word-in-a-sentence-in-c-program
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100
// Find the longest word of string s and store it in string mx to return
// Do not change this function header
char *longest(char *s, char *mx) {
	//Use strtok to get the longest world
	char *word = strtok(s, " ");
	// Iterate to compare and split the word using sttok
    for (int iterator; word[iterator] != '\0'; iterator ++) {
		if (strlen(mx) < strlen(word))  // Compare btw the current word in word and the length of the word in mx
			mx = word; 
		word = strtok(NULL, " "); // Call strtok again
	}
    return mx;
}

//Do not change anything in this function

int main() {
	char str[MAX] = {}, max[MAX] = {};
	printf("Enter a string: ");
	scanf("%[^\n]s", str);
	printf("Longest word: %s\n", longest(str, max));
	return 0;
}