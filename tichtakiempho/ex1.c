/*
Assessment Details
The Problem
The International Standard Book Number (ISBN) is a unique commercial book identifier. Since 2007, an ISBN has exactly 13 digits which consists of 5 elements separated by hyphens. 
•	Prefix element: currently this can only be either 978 or 979. It is always 3 digits in length. 
•	Registration group element: this identifies the country, geographical region, or language area participating in the ISBN system. This element may have 1 to 5 digits in length. 
•	Registrant element: this identifies the publisher or imprint. This element may have 1 to 7 digits in length. 
•	Publication element: this identifies the edition and format of a specific title. This element may have 1 to 6 digits in length. 
•	Check digit: this is always the final single digit that mathematically validates the rest of the number. 
The 13 digits of an ISBN must satisfy this validation test: 
(d1 + 3d2 + d3 + 3d4 + d5 + 3d6 + d7 + 3d8 + d9 + 3d10 + d11 + 3d12 + d13) mod 10 = 0 
Here is an example of a valid ISBN: 978-0-13-376131-3 
You are to analyze, design and implement a C program that repeatedly asks the user to enter an ISBN and check whether it is valid until 0 (zero) is entered to signal the program to exit. If an input is a valid ISBN, simply print out “Valid ISBN”. However, when an input is invalid, you must correctly print out one of the following detailed error messages. 
1.	Invalid ISBN. Input should only contain digits and hyphens. 
2.	Invalid ISBN. Input should have 5 elements separated by hyphens. 
3.	Invalid ISBN. Less than 13 digits. 
4.	Invalid ISBN. More than 13 digits. 
5.	Invalid ISBN. Prefix element must be either 978 or 979. 
6.	Invalid ISBN. Registration group element must have 1 to 5 digits. 
7.	Invalid ISBN. Registrant element must have 1 to 7 digits. 
8.	Invalid ISBN. Publication element must have 1 to 6 digits. 
9.	Invalid ISBN. Check digit must have exactly 1 digit. 
10.	Invalid ISBN. Failed validation test. 
Feel free to add additional error messages if needed.  
*/

#include <stdio.h>
#include <string.h>
int saved_p = 0;
const int PREFIX_SIZE = 4;
const char *PREFIX1 = "978-";
const char *PREFIX2 = "979-";
const int SIZE = 17;
const char HYPHEN = '-';
const int HYPHEN_SIZE = 4;

int check_char(char info[]);
int check_ele(char info[]);
int check_len(char info[]);
int check_prefix(char info[]);
int check_digit(char c);
int check_registration_group(char info[]);
int check_registrant(char info[]);
int check_publication(char info[]);
int check_final(char info[]);
int valid_test(char info[]);

int main() {
    while (1) {
        printf("Enter ISBN: ");
        char info[SIZE];
        scanf("%s", info);
        if (info[0] == '0') break;
        else if (check_char(info) && check_len(info) && check_ele(info) && check_prefix(info) && check_registration_group(info) && check_registrant(info) && check_publication(info) && check_final(info) && valid_test(info)) {
            printf("Valid ISBN\n");
        }
    }

    return 0;
}

int check_digit(char c) {
    if (c >= '0' && c <= '9') {
        return 1;
    } else return 0;
}

int check_char(char info[]) {
    for (int i = 0; info[i] != '\0' ; ++i) {
        if (info[i] != HYPHEN && !check_digit(info[i])) {
            printf("Invalid ISBN. Input should only contain digits and hyphens.\n");
            return 0;
        }
    }
    return 1;
}

int check_ele(char info[]) {
    int count_hyphen = 0;
    for (int i = 1 ; info[i] != '\0'; ++i) {
        if (info[i - 1] == HYPHEN && check_digit(info[i])) {
            ++count_hyphen;
        }
    }
    if (count_hyphen == HYPHEN_SIZE) return 1;
    else {
        printf("Invalid ISBN. Input should have 5 elements separated by hyphens.\n");
        return 0;
    }
}

int check_len(char info[]) {
    int count_digit = 0;
    for (int i = 0; info[i] != '\0'; ++i) {
        if (check_digit(info[i])) {
            ++count_digit;
        }
    }

    if (count_digit == 13) {
        return 1;
    } else if (count_digit < 13) {
        printf("Invalid ISBN. Less than 13 digits.\n");
        return 0;
    } else {
        printf("Invalid ISBN. More than 13 digits.\n");
        return 0;
    }
}

int check_prefix(char info[]) {
    char tmp[5] = {};
    strncpy(tmp, info, PREFIX_SIZE);
    if (strcmp(tmp, PREFIX1) == 0 || strcmp(tmp, PREFIX2) == 0) {
        return 1;
    } else {
        printf("Invalid ISBN. Prefix element must be either 978 or 979.\n");
        return 0;
    }
}

int check_registration_group(char info[]) {
    int i = 4, count_digit = 0;
    while (1) {
        if (check_digit(info[i])) {
            ++count_digit;
        } else {
            saved_p = i;
            break;
        }
        ++i;
    }
    if (count_digit <= 5 && count_digit > 0) {
        return 1;
    } else {
        printf("Invalid ISBN. Registration group element must have 1 to 5 digits\n");
        return 0;
    }
}

int check_registrant(char info[]) {
    int i = saved_p + 1, count_digit = 0;
    while (1) {
        if (check_digit(info[i])) {
            ++count_digit;
        } else {
            saved_p = i;
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

int check_publication(char info[]) {
    int i = saved_p + 1, count_digit = 0;
    while (1) {
        if (check_digit(info[i])) {
            ++count_digit;
        } else {
            saved_p = i;
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

int check_final(char info[]) {
    int i = saved_p + 1, count = 0;
    while (info[i] != '\0') {
        if (check_digit(info[i])) {
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