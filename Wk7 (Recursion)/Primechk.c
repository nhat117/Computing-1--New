#include <stdio.h>
#include <math.h>

int primechk(int num) {
	    int i, result = 1; 
  	 // Iterate from 2 to n/2 
    for (i = 2; i <= sqrt(num); i++) { 
  
        // If n is divisible by any number between 
        // 2 and n/2, it is not prime 
        if (num % i == 0) { 
            result = 0; 
            break; 
        } 
    } 
  	if (num<=1) 
    result = 0; 
    else if (num==2) 
    result = 1;  
	return result;
}

void printres (int num) {
	int result = primechk (num);
	if (result == 1) { 
        printf ("%d is a prime number", num); 
    } 
    else { 
        printf ("%d is not a prime number", num); 
    } 
}

int main (void) {
	printf ("Please enter a number to check: ");
	int num;
	scanf ("%d", &num);
	printres(num);
	return 0;
}
