/*********************************************
*	8 August 2019			     *
*	C Programming A Modern Approach	     *
*					     *
*	Programming Projects: 4		     *
**********************************************/

#include <stdio.h>
#define tax 0.05f
int main(void)
{
	float dollarAmount;
	float centsAmount;

	printf("Enter the number of dollars you have: ");
	scanf("%f", &dollarAmount);
	printf("Enter the number of   cents you have: ");
	scanf("%f", &centsAmount);
	
	float totalAmount = dollarAmount + (centsAmount / 100 );

	printf("You have in totla $%.2f\n", totalAmount);
	printf("With tax added it is  $%.2f\n", (tax * totalAmount)+totalAmount );

}




