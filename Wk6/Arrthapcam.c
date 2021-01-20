#include <stdio.h>
int main (int argv, char const *argc[]) {
	int arr[] = {12, 7, -3, 4, 1};
	// Print the array in the normal order
	const int SIZE = 5; 
	for (int *p = arr; p < arr + SIZE; p++) {
		printf ("%d ", *p);
	}
	// Print in reverse order 
	printf ("\n");
	for (int *p = arr + SIZE -1; p >= arr; p-- ) {
		printf ("%d ", *p);
	}
	printf ("\n");
	// calculate the sum 
	int sum = 0;
	for (int *p = arr; p < arr +SIZE; p++) {
		sum = sum + *p;
	}
	printf("%d", sum);
printf("\n");
	// Reverse the elements of the arr
	int tmp;
	for (int *p = arr; p < arr + SIZE; p++) {
		for (int * j = arr +SIZE - 1; j >= arr; j--) {
			tmp = *p;
			*p = *j;
			*j = tmp; 
		}	
	}
	for (int *p = arr; p < arr + SIZE; p++) {
		printf ("%d ", *p);
	}	
	

}