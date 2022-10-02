// alignment.c -- aligns values in columns
#include <stdio.h>

int main() {

	int val1, val2, val3;

	printf("\nEnter three integers: \n");
	scanf("%d %d %d", &val1, &val2, &val3);

	printf("\nHere is the data table: \n");
	printf("------------------------------------\n");
	printf("%9d %9d %9d\n", val1, val2, val3);
	printf("%9d %9d %9d\n", 4, 5, 23);
       	printf("%9d %9d %9d\n", 22334, 2322, 10001);
	
	printf("\n");
	return 0;
}	
