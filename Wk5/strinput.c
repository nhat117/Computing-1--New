#include <stdio.h>
#include <string.h>

#include <stdio.h>
int main()
{
    char str[100][5];
    char *p;

    printf("Enter any string: ");
	for (int i = 0; i <=5; i++){
		scanf("%[^\n]s", str[i]);
	}
	
    /* Assigning the base address str[0] to pointer
     * p. p = str is same as p = str[0]
     */
    for (int i = 0; i <= 5; i++){
	p = str[i];
    printf("The input string is: ");
    //'\0' signifies end of the string
    while(*p!=' ')
        printf("%c",*p++);
	}
    return 0;
}