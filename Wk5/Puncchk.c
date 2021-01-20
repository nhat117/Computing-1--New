#include <stdio.h>
#include <string.h>

int main(void) {
	char arr[100] = {};
	int num = 0, punc = 0, letter = 0;
	printf("Please input a sentence\n");
	fgets(arr, 100, stdin);

	//check if the enter sentence is num, let, or punc
	for (int i = 0; i < 100; i++) {
		if (arr[i] >= '!' && arr[i] <= '/') {
			punc ++;
		} else if (arr[i] >= '0' && arr[i] <= '9'){
			num ++;
		} else if ((arr[i] >= 'A' && arr[i] <= 'Z') || (arr[i] >= 'a' && arr[i] <= 'z')) {
			letter ++;
		}
	} 

	printf("There is %d numbers, %d punctuations and %d letters in the input\n", num, punc, letter);
	return 0;
}