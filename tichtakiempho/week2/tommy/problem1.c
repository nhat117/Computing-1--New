#include <stdio.h>

int main(void) {
	float celsius, farenheit;
	printf("Please enter a Celcius temperature value to convert it into Farenheit: \n");
	scanf("%f", &celsius);
	farenheit = celsius *1.8 + 32;
	printf("%f Celsius is equal to %.2f Farenheit", celsius, farenheit);
	return 0;
}