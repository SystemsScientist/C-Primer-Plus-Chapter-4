// width2.c -- uses field widths

#include <stdio.h>

#define PAGES 931

int main() {

	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%3d*\n", PAGES);

	printf("*%4d*\n", PAGES);
	printf("*%5d*\n", PAGES);
	printf("*%6d*\n", PAGES);

	printf("*%7d*\n", PAGES);
	printf("*%8d*\n", PAGES);
	printf("*%9d*\n", PAGES);
	
	printf("*%10d*\n", PAGES);
	printf("*%11d*\n", PAGES);
	printf("*%12d*\n", PAGES);
	
	printf("*%-12d*\n", PAGES);
	printf("*%-11d*\n", PAGES);
	printf("*%-10d*\n", PAGES); 

	return 0;
}
