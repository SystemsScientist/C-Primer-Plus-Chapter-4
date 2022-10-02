// Exercise #2, Chapter 4 - C Primer Plus
//
// Write a program that requests your first name
// and does the following with it:
//
// 	a. Prints it enclosed in double quotation
// 	   marks
//
// 	b. Prints it in a field 20 characters
// 	   wide, with the whole field in quotes
//
// 	c. Prints it at the left end of a field
// 	   20 characters wide, with the whole 
// 	   field enclosed in quotes
//
// 	d. Prints it in a field three characters
// 	   wider than the name
//
//Author: Matthew Johnson
//	  Graduate Student
//	  Software Engineering
//
//Date: 09/27/2022

#include <stdio.h>

int main() {

	char first_name[40];

	printf("\nEnter your first name: ");
	scanf("%s", first_name);

	printf("\"%s\"\n", first_name);		// part a
	printf("\"%20s\"\n", first_name);	// part b
	printf("\"%-20s\"\n", first_name);	// part c
	printf("\"   %s\"\n", first_name);	// part d

	printf("\n");
	return 0;
}
