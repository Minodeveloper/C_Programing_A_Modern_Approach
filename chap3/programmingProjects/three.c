/*
	22 August 2019
	Book: C Pogramming A Moder Approach

	Programming Projects: 3

	// ISBN break down
*/

#include <stdio.h>

int main(void)
{
	int gs1, groupIdentifier, publisherCode, itemNumber, checkDigit;

	printf("Enter ISBN : ");
	scanf("%d-%d-%d-%d-%d", &gs1, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

	printf("GS1 prefix: %d\n", gs1);
	printf("Group identifier: %d\n", groupIdentifier);
	printf("Publisher code: %d\n", publisherCode);
	printf("Item number: %d\n", itemNumber);
	printf("Check digit: %d\n", checkDigit);

	return 0;

}

