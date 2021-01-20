/*Cho 1 chuỗi, hãy viết 1 hàm (function) kiểm tra xem trong chuỗi có những ký tự nào và in ra số lượng của mỗi chữ từ a -> z với điều kiện là chữ (ký tự ko phải chữ) nào ko có thì ko đk in ra, chữ hoa – chữ thường cũng tính là 1 nhé, chữ hệ tiếng anh thôi :v, ko có tiếng việt tiếng trung gì cả. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int  MAX =  256;

int countch(char *str);
void determinech(char*str);

int main() {
	char *str;
	str = malloc(MAX);
	printf("Enter string");
	scanf("%s", str);
	determinech(str);
	free(str);
    return 0;
}

int countch(char *str) {
	int *counts;
	counts = malloc(MAX);
	int countnum;
	for (int iterator = 0; str + iterator != '\0'; iterator++) {
    	countnum = counts[(int)(str[iterator])]++;
	}
	return countnum;
}
void errorhandling(char *str) {
	 for (int iterator = 0; iterator < 3; ++iterator) {
        *(str+ iterator) = tolower(*(str + iterator));
        *(str+ iterator) = tolower(*(str + iterator));
	}
}

void determinech(char*str) {
	errorhandling(str);
	for (int iterator = 0; iterator < MAX; iterator++) {
	    if(countch (str) > 0)
    		printf("%c occurs %d times.\n", iterator , countch(str + iterator));
	}
}