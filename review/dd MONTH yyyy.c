// Convert dd mm yyyy to dd Month yyyy
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30
#define SIZE 3

char *mmname(char *mm, char *mnthname) {

	//Check mm
	if (strcmp(mm, "01") == 0) 
		strcpy(mnthname, "Jan");
	else if (strcmp(mm, "02") == 0) 
		strcpy(mnthname, "Feb");
	else if (strcmp(mm, "03") == 0) 
		strcpy(mnthname, "Mars");
	else if (strcmp(mm, "04") == 0) 
		strcpy(mnthname, "Apr");
	else if (strcmp(mm, "05") == 0) 
		strcpy(mnthname, "May");
	else if (strcmp(mm, "06") == 0) 
		strcpy(mnthname, "June");
	else if (strcmp(mm, "07") == 0) 
		strcpy(mnthname, "July");
	else if (strcmp(mm, "08") == 0) 
		strcpy(mnthname, "Aug");
	else if (strcmp(mm, "09") == 0) 
		strcpy(mnthname, "Sept");
	else if (strcmp(mm, "10") == 0) 
		strcpy(mnthname, "Oct");
	else if (strcmp(mm, "11") == 0) 
		strcpy(mnthname, "Nov");
	else if (strcmp(mm, "12") == 0) 
		strcpy(mnthname, "Dec");
	return mnthname;
}

void cpy(char *dest, char *mnthame1, char *dd, char *yyyy ) {
	strcpy(dest, dd);
	strcat(dest, " ");
	strcat(dest, mnthame1);
	strcat(dest, " ");
	strcat(dest, yyyy);
	}

char *strdate(const char *src, char *dest) {
	char mm[SIZE] = {}, dd[SIZE] = {}, yyyy[SIZE +2] = {}, mnthname1[MAX / 3] = {};
	strncpy(mm, src, 2);
	strncpy(dd, src + 3, 2);
	strncpy(yyyy, src + 6, 4);
	// printf("%s\n", mm);
	// printf("%s\n", yyyy);
	// printf("%s\n", dd);
	mmname(mm, mnthname1);
	// printf("%s\n",mnthname1);
	cpy(dest,mnthname1,dd,yyyy);
	return dest;
}

int main(void) {
	char datein [MAX] = {}, dateout [MAX] = {};
	printf("Enter a date: ");
	scanf("%s", datein);
	strdate(datein, dateout);
	printf("%s\n", strdate(datein, dateout));
	return 0;
}