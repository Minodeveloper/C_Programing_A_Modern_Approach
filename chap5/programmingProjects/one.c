/*
	13 September 2019
	Programming Projects Chapter 5
*/

#include <stdio.h>

int main(void)
{
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);

	if( number >= 0 && number <= 9)
		printf("The number %d is a 1 digit number.\n", number);
	else if( number >= 10 && number <= 99)
		printf("The number %d is a 2 digit number.\n", number);
	else if( number >= 100 && number <= 999)
		printf("The number %d is a 3 digit number.\n", number);
	else	printf("The number %d is a 4 digit number.\n", number); 
	return 0;
}
