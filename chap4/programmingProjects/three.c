/*
	1 September 2019
	SAME AS THE PREVIOUS BUT PREVIOUS
	ONES EXPECTED TO USE ARITHMATIC 
	DIGIT SEPERARION ( NUMBER / 10 )
*/

#include <stdio.h>

int main(void)
{
	int num1, num2, num3;
	printf("Enter a three digit number: ");
	scanf("%1d%1d%1d", &num1, &num2, &num3);
	printf("The reversed number is: %d%d%d\n", num3, num2, num1);

	return 0;
}
