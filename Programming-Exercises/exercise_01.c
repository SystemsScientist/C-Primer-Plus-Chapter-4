// Exercise #1, Chapter 4 - C Primer Plus
//
// Write a program that asks for your first name, last name,
// and prints the names in the format: last, first
//
// Author: Matthew Johnson
// 	   Graduate Student
// 	   Software Engineering
//
// Date: 09/27/2022

#include <stdio.h>

int main() {

	char first_name[30];
	char last_name[30];

	printf("\nEnter your first name: ");
	scanf("%s", first_name);

	printf("Enter your last name: ");
	scanf("%s", last_name);

	printf("%s, %s\n", last_name, first_name);
	
	printf("\n");
	return 0;
}
