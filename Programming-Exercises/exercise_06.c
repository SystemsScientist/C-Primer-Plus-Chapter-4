// Exercise 6, Chapter 4, C Primer Plus
//
// Write a program that sets a type double
// variable to 1.0/3.0 and a type float
// variable to 1.0/3.0. Display each result
// three times - once showing four digits 
// to the right of the decimal, and once
// showing 12 digits to the right of the
// decimal, and once showing 16 digits to
// the right of the decimal. Also have the
// program include float.h and display the 
// values of FLT_DIG and DBL_DIG. Are the 
// displayed values of 1.0/3.0 consistent 
// with these values?

#include <stdio.h>
#include <float.h>

int main() {

	float flt_var = 1.0 / 3.0;
	double dbl_var = 1.0 / 3.0;

	printf("\n%-20.4f %-20.4f\n", flt_var, dbl_var);
	printf("%-20.12f %-20.12f\n", flt_var, dbl_var);
	printf("%-20.16f %-20.16f\n", flt_var, dbl_var);

	printf("\nFLT_DIG: %d\n", FLT_DIG);
	printf("DBL_DIG: %d\n", DBL_DIG);

	printf("\n");
	return 0;
}
