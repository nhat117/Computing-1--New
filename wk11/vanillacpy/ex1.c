#include <stdio.h>
#include <string.h>
int copy(FILE *fi, FILE *fo) {
	int result;
	for(int ch = fgetc(fi); ch != EOF; ch=fgetc(fi)) {
		result = fputc(ch,fo);
	}
	return result;
} 

//Check for error
void chck(FILE *input) {
	if (input == NULL) {
		printf("Cannot open file \n");
	}
}

int main(int argc, char const *argv[]) {
	FILE *fi= fopen("input.txt","r");
	chck(fi);
	FILE *fo = fopen("output.txt","w"); 
	chck(fo);
	printf("%d", copy(fi,fo));
	//Close file
	fclose(fi);
	fclose(fo);
	return 0;
}