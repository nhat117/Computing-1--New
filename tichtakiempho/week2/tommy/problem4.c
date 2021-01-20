#include <stdio.h>

int main(void) {
	printf("Please enter the result of the assignment\n 1, 2, 3\n ");
	
	float asmt1, asmt2, asmt3, final;

	scanf("%f %f %f", &asmt1, &asmt2, &asmt3);

	final = ((asmt1 + asmt2) * 30 + asmt3 * 40) / 100;
	printf("The final result is %.2f\n", final);
	return 0;
}