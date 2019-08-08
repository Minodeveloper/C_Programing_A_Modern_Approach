/*
	7 August 2019
	Book: C Programming A Modern Approach

	Converts a Fahrenheit temperature to Celsius
*/

#include <stdio.h>
#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f / 9.0f)
int main(void)
{
	float fahrenheit, celsius;

	printf("Enter Fahrenheit temperature: ");
	scanf("%f", &fahrenheit);

	celsius = (fahrenheit - FREEZING_PT) * SCALE_FACTOR;

	printf("Celsius equivalent: %.3f\n", celsius);  //0.3f is used to tell to print 3 digits after decimal

	return 0;

}


