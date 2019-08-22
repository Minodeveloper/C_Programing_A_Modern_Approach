/*****************************************************************
	Programming Projects
	Book: C Programming A Modern Approach
	
	//Program that accepts a date from the user in the form
	// mm/dd/yyyy and display in the form yyyymmdd

	Output Expected:
			Enter a date (mm/dd/yyyy) : 2/17/2011
			You entered the date 20110217
*******************************************************************/


#include <stdio.h>

int main(void)
{
	int mm, dd, yyyy;
	
	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	
	printf("You entered the date %d%.2d%.2d \n", yyyy, mm, dd);
	
	return 0;
}
