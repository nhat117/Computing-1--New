#include <stdio.h>

int main(void) {
    // Declare and initialize array
    const int SIZE = 5;
    int arr[] = {12, 7, -3, 4, 1};

    // Print array elements in normal order
    printf("Array elements in normal order: ");
    for (int *p = arr; p < arr + SIZE; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    // Print array elements in reverse order
    printf("Array elements in reverse order: ");
    for (int *p = arr + SIZE - 1; p >= arr; p--) {
        printf("%d ", *p);
    }
    printf("\n");

    // Calculate the sum of array elements
    int sum = 0;
    for (int *p = arr; p < arr + SIZE; p++) {
        sum += *p;
    }
    printf("Sum is %d\n", sum);

    // Reverse the array
    printf("Start reversing the array ... ");
    int tmp;
    for (int *p = arr, *q = arr + SIZE - 1; p < q; p++, q--) {
        tmp = *p;
        *p  = *q;
        *q = tmp; 
    }
    printf("Done!\n");

    // Print array elements in normal order
    printf("Array elements in normal order: ");
    for (int *p = arr; p < arr + 5; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    return 0;
}