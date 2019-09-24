/*
	24 September 2019
	Programming Projects 5
	:Calculating tax due
*/

#include <stdio.h>

int main(void)
{
	float income;

	printf("What is your income ?: $");
	scanf("%f", &income);

	if (income < 750)
	{
		printf("Tax to be payed is $%.2f\n", (1.0/100.0) * income);
	}
	else if (income >= 750 && income <= 2250)
	{
		printf("Tax to be payed is $%.2f\n", ((2.0/100.0) * income) + 7.50);
	}
	else if (income > 2250 && income <= 3750)
	{
		printf("Tax to be payed is $%.2f\n", ((3.0/100.0) * income) + 37.50);
	}
	else if (income > 3750 && income <= 5250)
	{
		printf("Tax to be payed is $%.2f\n", ((4.0/100.0) * income) + 82.50);
	}
	else if (income > 5250 && income <= 7000)
	{
		printf("Tax to be payed is $%.2f\n", ((5.0/100.0) * income) + 142.50);
	}
	else  
		printf("Tax to be payed is $%.2f\n", ((6.0/100.0) * income) + 230.00);
	
	return 0;

}
