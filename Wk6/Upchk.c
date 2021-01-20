#include <stdio.h>
int main (int argv, char const *argc[]) {
	char arr[100];
	const int DIFF = 'a' - 'A';
	printf("Enter a sentence: ");
	scanf("%[^\n]s", arr);
	// Convert to upper case
	char *p = arr;
	while (*p != '\0') {
	if (*p >='a'  && *p <= 'z'){
		*p -= DIFF;
		};
	p++;
	}
	//output the result
	printf("%s", arr);

}