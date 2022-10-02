// Exercise #4, Chapter 4 - C Primer Plus
//
// Write a program that requests your height in inches
// and your name, and then displays the information
// in the following form:
//
// Dabney, you are 6.208 feet tall
//
// Use type float, and use / for division. If you
// prefer, request the height in centimeters and
// display it in meters.
//
// Author: Matthew Johnson
// 	   Graduate Student
// 	   Software Engineering
//
// Date: 09/27/2022

#include <stdio.h>

int main() {

	float height;
	float inches;
	char first_name[40];

	printf("\nEnter your first name: ");
	scanf("%s", first_name);

	printf("Enter your height in inches: ");
	scanf("%f", &inches);

	height = inches / 12;

	printf("%s, you are %.3f feet tall\n", first_name, height);

	printf("\n");
	return 0;
}
