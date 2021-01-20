#include<stdio.h>

typedef enum {PASS, FAIL, ABSENT} status;
int main(void) {
status stud1, stud2, stud3;
stud1 = PASS;
stud2 = ABSENT;
stud3 = FAIL;
printf("%d, %d, %d\n", stud1, stud2, stud3);
}