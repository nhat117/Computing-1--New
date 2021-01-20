#include <stdio.h>
#include <string.h>


int cnvstr(char* str) {
	if (*str == '\0')
		return 0;
	int res = 0;
	
	/// convert the string
	for (int index = 0; str[index] != '\0'; index ++) {
		if(str[index] < '0' || str[index] > '9') 
			continue;
		else
			res =  res * 10 + str[index] - '0';
	}
	return res ;
}

int main(void) {
	char arr[] = "aaaaaaaa";
	printf("%d", cnvstr(arr));
	return 0;
}