// Write a program to compare two files, print out the first line where day differrent

#include<stdio.h>

void filecmp(FILE *fp1,FILE *fp2 ){
	int file1, file2;
	while(1) {
		// Go through the content of the file
		if ((file1 = getc(fp1)) == EOF) {
			break;
		} 
		if ((file2= getc(fp2)) == EOF) {
			break;
		}
		// Print out the content of the first line if they meet the differrent
		if (file1 != file2) {
			putchar(file1);
			putchar(file2);
			break;
		}
	}
}

int main(int argc, char *argv[]) {
	FILE *fp1, *fp2;

	// Open the file

    if (argc == 1) {
        /* no args; copy standard input */
        printf("Please provide two files");
        return 1;
    } 
	else {
		while (--argc > 0) {
			if ((fp1 = fopen(argv[1], "r")) == NULL) {
				printf("cat: can't open %s\n", *argv);
				return 1;
			}

			if ((fp2 = fopen(argv[2], "r")) == NULL) {
				printf("cat: can't open %s\n", *argv);
				return 1;
			}

			filecmp(fp1, fp2);
		}	
	}


	fclose(fp1);
	fclose(fp2);
	return 0;
}