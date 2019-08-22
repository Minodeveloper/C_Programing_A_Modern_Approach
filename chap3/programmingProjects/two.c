/*
	22 August 2019
	Book:C Programming A Modern Approach

	Programming Project: 2
*/

#include <stdio.h>

int main(void)
{
	int itemNumber;
	float unitPrice;
	int mm, dd, yyyy;

	printf("Enter item number: ");
	scanf("%d", &itemNumber);

	printf("Enter unit price: ");
	scanf("%f", &unitPrice);

	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("\n");

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%-4.2f\t\t%d/%d/%d\n", itemNumber, unitPrice, mm, dd, yyyy);
}
