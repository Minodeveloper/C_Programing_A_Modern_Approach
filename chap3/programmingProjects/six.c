/*
	24 August 2019
	Book: C Programming A Modern Approach
	Chapter 3
	Programming Projects: 6 

*/

#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter fractions to be added (eg:x/y+j/k): ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);


//	printf("Enter second fraction: ");
//	scanf("%d/%d", &num2, &denom2);

	result_num = (num1 * denom2) + (num2 * denom1);
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);
	
	return 0;
	
} 

