// prntval.c -- finds printf()'s return value

#include <stdio.h>

int main() {

	int bph2o = 212;
	int rv;

	rv = printf("\n%d F is water's boiling point.\n", bph2o);
	printf("The printf() function printed %d characters.\n", rv);
	
	printf("\n");
	return 0;
}
