#include<stdio.h> 
#include<stdlib.h>
#define SIZE 100

int copywithline(FILE *fi, FILE *fo) {
	int result;
	int newline = 1;
	int prev = '\n';
	int cur = fgetc(fi);
	
	while(cur != EOF) {
		if(prev == '\n') {
			fprintf(fo, "%d", newline);
			newline ++;
		}
		fputc(cur, fo);
		prev = cur;
		cur = fgetc(fi);
	}
	return result;
} 


int main(void) {
	char *file;
	file = malloc(SIZE);
	printf("Enter FILE name: ");
	scanf("%s", file);
	FILE *fi = fopen(file, "r");
	FILE *fo = fopen("output.txt", "w");
	copywithline(fi, fo);
}