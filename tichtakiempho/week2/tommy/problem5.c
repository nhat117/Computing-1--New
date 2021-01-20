#include <stdio.h>

int main(void) {
	printf("Please enter the time value (in minutes) that you want to calculate its equivalent in hours and remaining in minutes\n");
	 
	 int input_minutes, hours, remaining_minutes;
	 
	 scanf("%d", &input_minutes);
	 
	hours = input_minutes / 60;
	remaining_minutes = input_minutes % 60;

	printf("%d minutes is equal to %d hours and %d minutes\n", input_minutes, hours, remaining_minutes);

	return 0;
}