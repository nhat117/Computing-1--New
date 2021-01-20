#include <stdio.h>

int main (void) {
	char arr[1000] = {};
	printf("Please in put a string:  ");
	fgets(arr,100, stdin);	
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] >= 65 && arr[i] <= 90) {
			arr[i] = arr[i] + 32;
		} else if (arr[i] >= 97 && arr[i] <= 122 ){
			arr[i] = arr[i] - 32;
		}
	}
	for (int i = 0; arr[i] != '\0'; i++){
	printf("%c", arr[i]);
	}
	return 0;
}