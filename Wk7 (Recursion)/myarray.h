
//Print array
void printarr(int array[], int size) {
		int *p = array; 
	for (int *p = array;  p < array + size; p++) {
		printf ("%d ", *p);
	}
	printf("\n");
}
// Print rev
void printarrayrev(int array[], int size) {
	    printf("Array elements in reverse order: ");    
		for (int *p = array + size - 1; p >= array; p--) {        
			printf("%d ", *p);    
		}    
	printf("\n");
}
//Arr max
int lS(int array[],  int size) {
	int max = array[0];
	for (int *p = array; p < array + size; p++){
		if (max < *p)
		max = *p;
	}
	return max;
}
// Number search 
int numls(int array[], int size, int num) {
	for (int *p = array; p < array + size - 1; p++){ //linear search 
		if (num == *p) {
		return 1;
		}
	}
	return 0;
}