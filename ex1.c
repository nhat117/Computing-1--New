#include <stdio.h>
typedef struct {
    double x;
    double y;
} point;

int main(void) {
point pa = {1, 2};
point pb = pa;

if (pb == pb)
    printf("Two points are identical");
else
    printf("Two points are different \n");
}