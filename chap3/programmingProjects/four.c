/**
	22 August 2019
	Book: C Programming A Modern Approach

	Programming Projects: 4
*/

#include <stdio.h>

int main(void)
{
	int xxx1, xxx2, xxxx;

	printf("Enter a phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &xxx1, &xxx2, &xxxx);
	
	printf("You entered %3d.%3d.%4d\n", xxx1, xxx2, xxxx);
	
	return 0;
} 
