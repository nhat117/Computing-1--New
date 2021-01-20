#include <stdlib.h>
#include <stdio.h>

void sort(int arr[], int begin, int end);
void merge(int arr[], int begin, int mid, int end);
void print(int arr[], int size);
void insert_remain(int tmp[], int arr[], int i, int k, int size);
void cpy_arr(int tmp[], int arr[], int size, int begin);

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr)/sizeof(int);

    printf("Given array is\n");
    print(arr, size);

    int begin = 0, end = size - 1;
    sort(arr, begin, end);

    print(arr, size);
    return 0;
}

void print(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    } printf("\n");
}

void sort(int arr[], int begin, int end) {
    if (begin < end) {
        int mid = begin + (end - begin) / 2;
        sort(arr, begin, mid);
        sort(arr, mid + 1, end);
        merge(arr, begin, mid, end);
    }
}

void cpy_arr(int tmp[], int arr[], int size, int begin) {
    for (int i = 0; i < size; ++i) {
        tmp[i] = arr[begin + i];
    }
}

void insert_remain(int tmp[], int arr[], int i, int k, int size) {
    while (i < size) {
        arr[k] = tmp[i];
        ++i, ++k;
    }
}

void merge(int arr[], int begin, int mid, int end) {
    int i = 0, j = 0, k = begin;
    int size1 = mid - begin + 1;
    int size2 = end - mid;
    int tmp1[size1];
    int tmp2[size2];

    cpy_arr(tmp1, arr, size1, begin);
    cpy_arr(tmp2, arr, size2, mid + 1);

    while (i < size1 && j < size2) {
        if (tmp1[i] <= tmp2[j]) {
            arr[k] = tmp1[i];
            i++;
        } else {
            arr[k] = tmp2[j];
            j++;
        }
        k++;
    }
    if (i < size1) insert_remain(tmp1, arr, i, k, size1);
    else if (j < size2) insert_remain(tmp2, arr, j, k, size2);
}
