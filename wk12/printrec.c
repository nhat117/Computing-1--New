#include <stdio.h>

void printarr(int *arr, int size) {
	if(size < 0) {
		return;
	}
	printf("%d, ", arr[size -1]);
	printarr(arr, size - 1);
}

void printarrfwd(int *arr, int size) {
	if(size < 0) {
		return;
	}
	printf("%d, ", *arr);
	printarr(arr + 1, size - 1);
}


int main(void) {
	int arr[] = {8,9,7,2};
	printarrfwd(arr, 4);

}