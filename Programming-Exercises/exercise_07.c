// Exercise 7, Chapter 4, C Primer Plus
//
// Write a program that asks the user to enter 
// the number of miles traveled and the number
// of gallons of gasoline consumed. It should 
// then calculate and display the miles-per-gallon
// value, showing one place to the right of the
// decimal. Next, using the fact that one mile-
// per-gallon value to a liters-per-100-km
// value, the usual European way of expressing
// fuel consumption, and display the result, 
// showing one place to the right of the 
// decimal. 
//
// Note that the U.S. scheme measures the amount
// of fuel per distance, whereas the European
// scheme measures the distance per amount of
// fuel. Use symbolic constants (using const or
// #define) for the two conversion factors.

#include <stdio.h>

int main() {

	float const LITERS_PER_KM_100 = 235.214583;
	float miles, gallons, miles_per_gallon;

	printf("\nEnter the number of miles traveled: ");
	scanf("%f", &miles);

	printf("Enter the number of gallons used: ");
	scanf("%f", &gallons);

	printf("\nMiles traveled: %.1f\n", miles);
	printf("Gallons used: %.1f\n", gallons);

	// See "Miles per gallon to liter per 100km" in search engine
	miles_per_gallon = miles / gallons;

	printf("\nMiles per gallon: %.1f\n", miles_per_gallon);
	printf("Liters per 100km: %.1f\n", LITERS_PER_KM_100 / miles_per_gallon);

	printf("\n");
	return 0;
}
