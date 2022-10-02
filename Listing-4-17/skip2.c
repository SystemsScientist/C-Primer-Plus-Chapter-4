// skip2.c -- skips over first two integers of input
#include <stdio.h>

int main() {

	int n;

	printf("\nPlease enter three integers: \n");
	scanf("%*d %*d %d", &n); 	// What happens if the * is removed?

	printf("The last integer was %d\n", n);

	printf("\n");
	return 0;
}
