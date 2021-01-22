#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1000
int linenum;

//Struct definition
typedef enum {NN, PA, CR, DI, HD} grade;

typedef struct {
    char lname[20];
    int id;
	char gradec[3];
    grade grade;
} studenttype;

//Function definition
void swp(studenttype *ite1, studenttype *ite);
void sortname(studenttype arr[]); 
void sortgrade(studenttype arr[]);
void convertgrade(studenttype arr[], int *iterator);
void prt(studenttype *arr) {
	for (int i = 0; i < linenum; i ++) {
		printf("%s %d %s\n", arr[i].lname, arr[i].id, arr[i].gradec);
	}
}

int main(int argc, char const *argv[]) {
    // Check arguments
	//Chk argument
	if(argc < 2) {
		printf("Wrong arg\n");
		return -1;
	}
    // Open file
	FILE *filein;
	filein =fopen(argv[1], "r");
	if (filein == NULL) {
		return -1;
	}
	// Create student array;
	studenttype *studarr;
	studarr = calloc(1, SIZE);
	//Read the content of file and put in the array;
	int iterator = 0;
	while (1) {
		if (fscanf(filein, "%s %d %s" , studarr[iterator].lname, &studarr[iterator].id, studarr[iterator].gradec ) == EOF)
			break;
		iterator ++;
	} 
	linenum = iterator;
	// Covertgrade 
	convertgrade(studarr, &iterator);
    // Sort the array by grade and last name
	sortgrade(studarr);
	sortname(studarr);
    // Print the array
	prt(studarr);
	// Close file
	fclose(filein);
	free(studarr);
	return 0;
}

void swp(studenttype *ite1, studenttype *ite) {
	studenttype tmp;
	strcpy(tmp.lname, ite1 -> lname);
	strcpy(ite1 -> lname, ite -> lname);
	strcpy(ite -> lname, tmp.lname);

	// Swap id
	tmp.id = ite1->id;
	ite1 -> id = ite -> id;
	ite -> id = tmp.id;

	// Swap grade
	strcpy(tmp.gradec, ite1->gradec);
    strcpy(ite1 -> gradec, ite -> gradec);
    strcpy(ite -> gradec, tmp.gradec);

	// Swap num grade
    tmp.grade = ite1 -> grade;
    ite1 -> grade = ite -> grade;
    ite -> grade = tmp.grade;
}
// Use bublesort to sort
void sortname(studenttype arr[]) {
	for(int i = 0; i < linenum; i++) {
		for (int ite = 0; ite < linenum - i -1; ite ++) {
			if (arr[ite].lname > arr[ite +1].lname)
				swp(&arr[ite], &arr[ite + 1]);
		}
	}
}

void sortgrade(studenttype arr[]) {	
	for(int i = 0; i < linenum - 1; i++) {
		for (int ite = 0; ite < linenum - i - 1; ite ++) {
			if (arr[ite +1].grade > arr[ite].grade)
				swp(&arr[ite], &arr[ite +1]);
		}
	}
}

void convertgrade(studenttype arr[], int *iterator) {
	for (int i = 0; i < *iterator; ++i) {
        if (!strcmp(arr[i].gradec, "HD")) {
            arr[i].grade = HD;
        } else if (!strcmp(arr[i].gradec, "DI")) {
            arr[i].grade = DI;
        } else if (!strcmp(arr[i].gradec, "CR")) {
            arr[i].grade = CR;
        } else arr[i]. grade = NN;
    }
}