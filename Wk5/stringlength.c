#include <stdio.h>


int main (void) {
	char arr_string[100] = {'\0'}; //good practice do do
	printf("Please enter a string:\n");
	scanf("%[^\n]s", arr_string); //automatically initiallise
	

	// write a function that can count the length of an input string
	int len = 0 ;

	//USE FOR LOOPS IF YOU KNOW HOW MANNY TIME YOU WILL LOOPS
	while( arr_string[len] != '\0'){
		 len ++;	
	} 
	printf("%d", len - 1);
	return 0;
} 