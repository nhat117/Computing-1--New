#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 3


typedef struct{float x; float y;} point;

float pointdist(point test[], int iterator1, int iterator2) {
	float output = sqrt((test[iterator1].x - test[iterator2].x) * (test[iterator1].x - test[iterator2].x)  + (test[iterator1].y - test[iterator2].y) * (test[iterator1].y - test[iterator2].y));
	return output;
}

void pointscan(point test[]) {
	for (int iterator = 0; iterator < SIZE; iterator++) {
		printf("Please enter %d point x y:  ", iterator + 1);
		scanf("%f %f", &test[iterator].x, &test[iterator].y);
	}
}

float maxdist(point test[], point best[]) {
	float dist = 0, bestdist = 0;
	for(int iterator1 = 0; iterator1 < SIZE; iterator1 ++ ) {
		for(int iterator2 = iterator1 + 1; iterator2 < SIZE; iterator2 ++) {
			dist = pointdist(test, iterator1, iterator2);
			if(dist > bestdist) {
				bestdist = dist;
				best[0] = test[iterator1];
				best[1] = test[iterator2];
			}
		}
	}
	return bestdist;
}

int main(void) {
	point test[SIZE];
	point best[2];
	pointscan(test);
	printf("%f\n", maxdist(test, best));
	for(int iterator1 = 0; iterator1 < 2; iterator1 ++) {
		printf("x: %f y :%f of %d point", best[iterator1].x, best[iterator1].y, iterator1 + 1);
	}
	return 0;
}
