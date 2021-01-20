#include <stdio.h>
#include <stdlib.h>
const int HYPNO = 4, SIZE = 17;

const int PREFIX1 = 978, PREFIX2 = 979;

int countnum = 0, counthyphen = 0, saved = 0;
int *countdig = &countnum, *counthyp = &counthyphen, *saved_p = &saved;


int main(void) {
	char isbn[18] = {};
	printf("Please enter ISBN number: ");
	scanf("%s", &isbn[18]);
}

int check_prefix (char *isbn) {
	char prefixarr[3] = {};
	for (int iterator = 0; iterator < 3; iterator ++) {
		prefixarr[iterator] = isbn[iterator];
	}
	if (atoi(prefixarr) != PREFIX1 || atoi(prefixarr) != PREFIX2) {
		return 0;
	} else {
		return 1;
	}
}
int check_digit(char isbn) {
	  if (isbn >= '0' && isbn <= '9') {
        return 1;
    } else return 0;
}

int checknumdigit(char isbn[]) {
	*countdig = 0;
	int result = 0;
	for(int iterator = 0; isbn[iterator] != '\0'; iterator ++) {
		if (isbn[iterator] >= '0' && isbn[iterator] <='9' ){
			result = 1;
			*countdig = *countdig + 1;
		} else
			result = 0;
	} 
	return result;
}

int checknumberofdigitres (int *countdig) {
	if (*countdig < 13) {
		printf("Invalid, less than 13 digit");
		return 0;
	} else if (*countdig > 13) {
		printf("Invalid, over 13 digit");
		return 0;
	} else 
		return 1;
}

int check_element(char isbn[]) {
	*counthyp = 0;
	for(int iterator = 0; isbn[iterator] != '\0'; iterator ++) {
		if (check_digit(isbn[iterator]) && isbn [iterator] =='-' ){
			*counthyp = *counthyp + 1;
		}
	}  
	if (*counthyp == HYPNO) 
		return 1;
    else {
        printf("Invalid ISBN. Input should have 5 elements separated by hyphens.\n");
        return 0;
    }
}


int check_registration_group(char info[]) {
    int iterator = 4, count_digit = 0;
    while (1) {
        if (check_digit(info[iterator])) {
            ++count_digit;
        } else {
            *saved_p = iterator;
            break;
        }
        ++iterator;
    }
    if (count_digit <= 5 && count_digit > 0) {
        return 1;
    } else {
        printf("Invalid ISBN. Registration group element must have 1 to 5 digits\n");
        return 0;
    }
}

int check_registrant(char isbn[]) {
    int i = *saved_p + 1, count_digit = 0;
    while (1) {
        if (check_digit(isbn[i])) {
            ++count_digit;
        } else {
            *saved_p = i;
            break;
        }
        ++i;
    }
    if (count_digit <= 7 && count_digit > 0) {
        return 1;
    } else {
        printf("Invalid ISBN. Registrant element must have 1 to 7 digits\n");
        return 0;
    }
}

int check_publication(char isbn[]) {
    int i = *saved_p + 1, count_digit = 0;
    while (1) {
        if (check_digit(isbn[i])) {
            ++count_digit;
        } else {
            *saved_p = i;
            break;
        }
        ++i;
    }
    if (count_digit <= 6 && count_digit > 0) {
        return 1;
    } else {
        printf("Invalid ISBN. Publication element must have 1 to 6 digits\n");
        return 0;
    }
}

int check_final(char isbn[]) {
    int i = *saved_p + 1, count = 0;
    while (isbn[i] != '\0') {
        if (check_digit(isbn[i])) {
            ++count;
        } else {
            break;
        }
        ++i;
    }
    if (count == 1) return 1;
    else {
        printf("Invalid ISBN. Check digit must have exactly 1 digit");
        return 0;
    }
}

int valid_test(char info[]) {
    int sum = 0;
    char even = 0;
    for (int i = 0; info[i] != '\0'; ++i) {
        if (check_digit(info[i]) && even == 0) {
            sum += info[i] - '0';
            even = 1;
        } else if (check_digit(info[i]) && even) {
            sum += (info[i] - '0') * 3;
            even = 0;
        }
    }
    if (sum % 10 == 0) {
        return 1;
    } else {
        printf("Invalid ISBN. Failed validation test.\n");
        return 0;
    }
}