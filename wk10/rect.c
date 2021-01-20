#include <stdio.h>
#include <stdlib.h>
#define SIZE 2

// Typedef
typedef struct{float x; float y;} point;
typedef struct{point lowerleft; point upperright; point upperleft; point lowerright;} rect;
typedef enum{FALSE, TRUE} bool;
// Third point is auxilary point

void pointrecscan(rect testrec[]) {
	int iterator = 0;
	printf("Please enter %d lowerleft point x y: ", iterator + 1);
	scanf("%f %f", &testrec[iterator].lowerleft.x, &testrec[iterator].lowerleft.y);
	printf("Enter the %d upperright point x y: ", iterator +1);
	scanf("%f %f", &testrec[iterator].upperright.x, &testrec[iterator].upperright.y);
	printf("Please enter %d lowerleft point x y: ", iterator + 2);
	scanf("%f %f", &testrec[1].lowerleft.x, &testrec[1].lowerleft.y);
	printf("Enter the %d upperright point x y: ", iterator + 2);
	scanf("%f %f", &testrec[1].upperright.x, &testrec[1].upperright.y);
}


float rectarea(rect testrec[]) {
	int iterator = 0;
	float area = ((testrec[iterator].lowerleft.x - testrec[iterator].upperright.y) * (testrec[iterator].lowerleft.y - testrec[iterator].upperright.x));
	return area;
}

bool checkpoint(point *pt, rect *testrec) {
	int iterator = 0;
	return pt->x > testrec[iterator].lowerleft.x && pt->x < testrec[iterator].upperright.x && pt-> y > testrec[iterator].lowerleft.y && pt-> y < testrec[iterator].upperright.y ? TRUE : FALSE;
}

void scanpoint(point *pt) {
	printf("Enter x y: ");
	scanf("%f %f", &pt->x, &pt->y);
}

bool checkrect(rect *testrec) {
	return checkpoint(&testrec[1].lowerleft, testrec) == TRUE && checkpoint(&testrec[1].upperright, testrec) == TRUE ? TRUE : FALSE;
}

int main(void) {
	rect testrec[SIZE];
	point pt;
	pointrecscan(testrec);

	scanpoint (&pt);
	
	int iterator = 0;
	printf("%f\n", rectarea(testrec));
	printf("%d\n",checkpoint(&pt, testrec));
	printf("%d", checkrect(testrec));
	return 0; 
}

