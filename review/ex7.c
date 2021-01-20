#include <stdio.h>

int arr_sum(int array[], int arrsize ) {
    //base case:
    if (arrsize == 0) {
        return array[0];
    }
	// Recursive part
	return (array[arrsize] + arr_sum(array, arrsize - 1));
}

int main(void)
{
    int arr[] = {1,2,3,4,5};
    int size = (sizeof(arr) / sizeof(arr[0])) -1; //size of the array
	//int arrsize = 4;
	printf("%d", arr_sum(arr, size));
    return 0;
}
