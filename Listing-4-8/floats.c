// floats.c -- displays some floating-point combinations

#include <stdio.h>

int main() {

	const double RENT = 3852.99;

	printf("\n*%f*\n", RENT);
	printf("*%e*\n", RENT);
	printf("*%4.2f*\n", RENT);
	printf("*%3.1f*\n", RENT);

	printf("*%10.3f*\n", RENT);
	printf("*%10.3e*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);
	
	printf("\n");

	return 0;
}
