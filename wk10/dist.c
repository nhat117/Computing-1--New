#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 2
typedef enum{FALSE, TRUE} bool;

typedef struct{float x; float y;} point;

void pointshow(point test[]) {
	printf("[%f, %f]", test[1].x, test[1].y);
}

float pointdist(point test[]) {
	int iterator = 0;
	float output = sqrt((test[iterator].x - test[iterator + 1].x) *(test[iterator].x - test[iterator + 1].x)  + (test[iterator].y - test[iterator +1].y) * (test[iterator].y - test[iterator +1].y));
	return output;
}

bool pointequal (point test[]) {
	return pointdist(test) < 0.0000001 ? TRUE : FALSE;
}

void pointscan(point test[]) {
	for (int iterator = 0; iterator < SIZE; iterator++) {
		printf("Please enter %d point x y:  ", iterator + 1);
		scanf("%f %f", &test[iterator].x, &test[iterator].y);
	}
}

int main(void) {
	point test[SIZE];
	pointscan(test);
	for (int iterator = 0; iterator < SIZE; iterator++) {
		printf("x %f y %f\n", test[iterator].x, test[iterator].y);
	}
	printf("%f %d", pointdist(test), pointequal(test));
	return 0;
}