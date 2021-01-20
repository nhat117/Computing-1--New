#include <stdio.h>

int main(void) {
	int iterator = 1;
	int vertical = 1;
	int hor = 1;
	const int ENDNUM = 12;
	printf("x");
	while (iterator <= ENDNUM) {
		printf("%4d", iterator);
		iterator ++;
	}
	printf("\n");
	while (vertical <= ENDNUM) {
		printf("%d", vertical);
		for (hor = 1; hor <= ENDNUM ; hor++) {
			printf("%4d", hor * vertical);
		}
		printf("\n");
		vertical++;
	}
}