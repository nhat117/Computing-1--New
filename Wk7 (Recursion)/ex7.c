#include <stdio.h>
int count (int num){
    int count=0;
    while(num >= 10){
        num /= 10; // hay n = n /10;
        count++;
    }
    return count ;
}

int power(int count) {
    int base = 10;
	if (count != 0)
        return (base * power(count --));
    else
        return 1;
}

int numrev(int num) {
	int rev = 0;
	int countnum = count(num);
	while(count> 0) {
		while(num > 0){
		int p = num % 10;
		rev += p * power(countnum);
		countnum --;
		num /= 10;
		}
	}
	return rev;
}

int main(void) {
	int num;
	scanf("%d", &num);
	printf("%d",numrev(num));
	return 0;
}