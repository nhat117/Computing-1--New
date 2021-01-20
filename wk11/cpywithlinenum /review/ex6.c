#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//linear search for max;
int lS(int arr[],  int size) {
int max = arr[0];
for (int i = 1; i < size; i++){
	if (max <arr[i])
		max = arr[i];
	}
return max;
}

int main(void) {
	int arr[4] = {1, 2, 5, 8};
	int d = lS(arr, 4);
	printf("%d", d);
	return 0;
}