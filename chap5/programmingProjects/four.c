/*
	14 September 2019
	Programming Projects Chapter 2019
*/

#include <stdio.h>

int main(void)
{
	int windSpeed;

	printf("Enter the wind speed(knots): ");
	scanf("%d", &windSpeed);

	if(windSpeed < 1)
	{
		printf("CALM\n");
	}
	else if(windSpeed >= 1 && windSpeed <= 3)
	{
		printf("LIGHT AIR\n");
	}
	else if(windSpeed >= 4 && windSpeed <= 27)
	{
		printf("BREEZE\n");
	}
	else if(windSpeed >= 28 && windSpeed <= 47)
	{
		printf("GALE\n");
	}
	else if(windSpeed >= 48 && windSpeed <= 63)
	{
		printf("STORM\n");
	}
	else
	{
		printf("HURRICANE\n");
	}
	
	return 0;
}
