#include<stdio.h>
#include<stdlib.h>
#include <ctype.h>
#define SIZE 100


//Read content of the file

void readfile(FILE *fi) {
	int wd = 1, line = 1;
	char ch = fgetc(fi);
	for(int ch = fgetc(fi); ch != EOF; ch=fgetc(fi)) {
	if (isspace(ch))
		wd ++;
	if (ch == '\n')
		line ++; 
	}
	printf("%d, %d", wd, line);
}


int main(void) {
	char *file;
	file = malloc(SIZE);
	printf("Enter FILE name: ");
	scanf("%s", file);
	FILE *fi = fopen(file, "r");
	readfile(fi);
	fclose(fi);
	return 0;
	
}