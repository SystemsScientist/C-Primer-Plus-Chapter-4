// Exercise #5, Chapter 4 - C Primer Plus
//
// Write a program that requests the user's 
// first name and then the user's last name.
// Have it print the entered names on one line 
// and the number of letters in each name on
// the following line. Align each letter count
// with the end of the corresponding name, as
// in the following:
//
// Melissa Honeybee
//       7        8
//
// Next, have it print the same information,
// but with the counts aligned with the 
// beginning of each name:
//
// Melissa Honeybee
// 7       8

#include <stdio.h>
#include <string.h>

int main() {

	char fname[40];
	char lname[40];

	int fname_width = 0;
	int lname_width = 0;

	printf("\nEnter your first name: ");
	scanf("%s", fname);

	fname_width = strlen(fname);

	printf("Enter your last name: ");
	scanf("%s", lname);

	lname_width = strlen(lname);

	printf("\n%s %s", fname, lname);
	printf("\n%*d %*d", fname_width, fname_width, lname_width, lname_width);

	printf("\n\n%s %s", fname, lname);
	printf("\n%-*d %-*d", fname_width, fname_width, lname_width, lname_width);

	printf("\n\n");
	return 0;
}
