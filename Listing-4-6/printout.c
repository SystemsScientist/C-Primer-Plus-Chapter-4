// printout.c -- uses conversion specifiers

#include <stdio.h>

#define PI 3.141593

int main() {

	int number = 5;
	float espresso = 13.5;
	int cost = 3100;

	printf("\nThe %d CEOs drank %f cups of espresso.\n", 
		number, espresso);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);
	
	printf("\n");
	return 0;
}
