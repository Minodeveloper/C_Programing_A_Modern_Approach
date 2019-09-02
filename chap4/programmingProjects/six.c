/*
	2 September 2019

	User enters first 12 digits of European Article Number (EAN has 13 digits)
	Check digit is calculated according to the standard formula 
*/

#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12;//, num13;
	int sumOne, sumTwo;
	int checkDigit;
	printf("\033[0;33mEnter the first 12 digits of an EAN:\033[0m ");

	scanf("d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &num1, &num2, &num3, &num4, &num5, &num6, &num7,
					    	       &num8, &num9, &num10, &num11, &num12);

	sumOne = (num2 + num4 + num6 + num8 + num10 + num12);  // standard formula
	sumTwo = (num1 + num3 + num5 + num7 + num9  + num11);  // standard formula
	
	checkDigit = 9 - ((((3 * sumOne) + sumTwo) - 1) % 10); // standard formula

	printf("\033[0;32mCheck digit :\033[0m %d\n", checkDigit);

	return 0;
}
