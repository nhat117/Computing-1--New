#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//linear search for max;
/* int lS(int arr[],  int size) {
int max = arr[0];
for (int i = 1; i < size; i++){
	if (max < arr[i])
		max = arr[i];
	}
return max;
}  */

int findmax(int *arr, int size) {
    if (size == 1)
        return *arr;
	int res = findmax(arr + 1, size - 1);
    return (*arr > res ? *arr : res);
}

// Find mean only beed to change the sign
int findmin(int *arr, int size) {
    if (size == 1)
        return *arr;
	int res = findmin(arr + 1, size - 1);
    return (*arr < res ? *arr : res);
}

int main(void) {
	int arr[4] = {1, 3, 5, 8};
	int d = findmin(arr, 4);
	printf("%d", d);
	return 0;
}