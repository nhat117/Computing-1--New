#include <stdio.h>
#include <string.h>
int copy(FILE *fi, FILE *fo) {
	int result;
	//Read and print each character
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
	//Chk argument
	if(argc !=3) {
		printf("Wrong arg\n");
		return -1;
	}
	FILE *fi= fopen(argv[1],"r");
	chck(fi);
	FILE *fo = fopen(argv[2],"w"); 
	chck(fo);
	printf("%d", copy(fi,fo));
	
	//Close file
	fclose(fi);
	fclose(fo);
	return 0;
}