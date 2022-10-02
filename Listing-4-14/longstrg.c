// longstrg.c -- prints long strings

#include <stdio.h>

int main() {

	printf("\nHere's one way to print a ");
	printf("long string.\n");
	printf("Here's another way to print a \
long string.\n");	// What happens if this line is indented?
	printf("Here's the newest way to print a "
		"long string.\n");	// ANSI C
	
	printf("\n");
	return 0;
}
