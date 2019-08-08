/*
	8 August 2019
	C Programming A Modern Approach

	Programming Projects: 7
*/

#include <stdio.h>

int main(void)
{
	int dollarAmount;
	int dollar_20_bill, remainder1;
	int dollar_10_bill, remainder2;
	int dollar_05_bill, remainder3;
	int dollar_01_bill;//remainder4;
	printf("Enter a dollar amount: ");
	scanf("%d", &dollarAmount);
	
	// $20 BILLS
	dollar_20_bill = dollarAmount / 20;
	remainder1 = dollarAmount % 20; 
	//$10 BILLS
	dollar_10_bill = remainder1 / 10;
	remainder2 = remainder1 % 10;
	//$05 BILLS
	dollar_05_bill = remainder2 / 5;
	remainder3 = remainder2 % 5;
	//$01 BILLS
	dollar_01_bill = remainder3 / 1;


	printf("\033[32m$20\033[0m bills : %2d\n", dollar_20_bill);
	printf("\033[32m$10\033[0m bills : %2d\n", dollar_10_bill);
	printf("\033[32m$05\033[0m bills : %2d\n", dollar_05_bill);
	printf("\033[32m$01\033[0m bills : %2d\n", dollar_01_bill);
	
	return 0;

}

