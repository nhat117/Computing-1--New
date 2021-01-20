//Find the longest word in the book
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 30

//Check for file size to allocate memory
int filesize(FILE *fin) {
	int size = 0;
	while (fgetc(fin) !=EOF) {
		size ++;
	}
	return size;
}

char *longest(char *string, char *mx) {
	for (char *p = string; *p != '\0'; ++p) {
		char word[MAX];
		char *q;
		 //Get word in a string
		for (q = word; !isspace(*p) && (*p != '\0'); ++p, ++q) {
			*q = *p;
		}
		 	*q = '\0';
		if (strlen(word) > strlen(mx)) {
			strcpy(mx,word);
		}
	}
	return mx;
}


char *longestchk(FILE *fin, char *str, char *mx, int size) {
	// Copy content of file into a string
	int k = 0;
	int i = fgetc(fin);
	*str = i;
	while(i != EOF) {
		*(str + k) = i;
		i = fgetc(fin);
		k ++;
	}
	str[k + 1] = '\0';
	// printf("%s", str);
	return longest(str,mx);
}

int main(int argc, char *argv[]) {
	FILE *fin;
	char *largest, *smallest;
	int smallest_len = MAX, largest_len = 0;
	largest = malloc(MAX), smallest = malloc(MAX);

	//Check for cmd line arg
	if (argc == 2) {
		fin = fopen(argv[1], "r");
	} else {
		printf("Please try again");
		return -1;
	}

	//Error opening file

	if (fin == NULL) {
		printf("Error openning file, Pls try again");
		return -1;
	}
	
	int size = filesize(fin);

	//Dynamic allocate memory
	char *str = (char *) calloc(1, size + 1);
	fclose(fin);
	// printf("%d", size);
	fin = fopen(argv[1],"r");
	printf("Longest word: %s \n", longestchk(fin, str, largest, size));
	fclose(fin);
	return 0;
}