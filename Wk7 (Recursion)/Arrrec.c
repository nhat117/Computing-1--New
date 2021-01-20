#include <stdio.h>
#include "myarray.h"
int main(void) {
	int arr[] = {4, 5, 3, 2};
	int sizearr = 4, num = 0 ;
	printarr(arr, sizearr);
	printarrayrev(arr, sizearr);
	printf("The max value of the array is %d\n", lS(arr, sizearr));
	printf ("Please enter the number that you want to find in the array : \n");
	scanf("%d", &num);
	printf("%d", numls(arr,sizearr, num));
	return 0;
}
