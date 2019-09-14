/*
	14 September 2019
	Programming Projects Chapter 5
*/

#include <stdio.h>

int main(void)
{
	int timeHour, timeMinute;
	printf("Enter a 24-hour time:  ");
	scanf("%d:%d", &timeHour, &timeMinute);

	if(timeHour >=0 && timeHour <= 12)
	{
		printf("Equivalent 12-hour time: %.2d:%.2d AM\n", timeHour, timeMinute);
	}
	else
	{
		printf("Equivalent 12-hour time: %.2d:%.2d PM\n", (timeHour - 12), timeMinute);
	}
	return 0;
}

