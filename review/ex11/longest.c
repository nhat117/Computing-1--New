#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#include<string.h>
#define SIZE 100


//Read content of the file

char *longest(char *string, char *mx) {
	for (char *p = string; *p != '\0'; ++p) {
		char word[SIZE];
		char *q;
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

void readfile(FILE *fi, char *wd) {
	char ch = fgetc(fi);
	for(int ch = fgetc(fi), iterator = 0; ch != EOF; ch=fgetc(fi), iterator ++) {
		*(wd + iterator) = ch;
	}
}


int main(void) {
	char *file, *wd, *mx;
	file = malloc(SIZE);
	printf("Enter FILE name: ");
	scanf("%s", file);
	FILE *fi = fopen(file, "r");
	readfile(fi,wd);
	printf("%s", longest(wd, mx));
	fclose(fi);
	return 0;
	
}