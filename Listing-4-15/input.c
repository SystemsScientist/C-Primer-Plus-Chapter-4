// input.c -- when to use &

#include <stdio.h>

int main() {

	int age;	// variable
	float assets;	// variable
	char pet[30];	// string

	printf("\nEnter your age, assets, and favorite pet: \n");
	scanf("%d %f", &age, &assets);	// use the & here 
	scanf("%s", pet);		// no & for the char array

	printf("%d $%.2f %s\n", age, assets, pet);

	printf("\n");
	return 0;
}
