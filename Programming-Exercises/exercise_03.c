// Exercise #3, Chapter 4 - C Primer Plus
//
// Write program that reads in a floating-point
// number and prints it first in decimal-point
// notation and then in exponential notation.
// Have the output use the following formats
// (the number of digits shown in the exponent
// may be different for your system):
//
// 	a. The input is 21.3 or 2.1e+001.
//
// 	b. The input is +21.290 or 2.12e+001.
//
// Author: Matthew Johnson
// 	   Graduate Student
// 	   Software Engineering
//
// Date: 09/27/2022

#include <stdio.h>

int main() {

	float num = 21.29;
	
	printf("\nEnter a decimal number: " );
	scanf("%f", &num);

	printf("\nThe input is %.1f or %.1e.\n", num, num);
	printf("The input is %.3F or %.3E.\n", num, num);

	printf("\n");
	return 0;
}
