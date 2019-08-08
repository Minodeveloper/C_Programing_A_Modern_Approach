/*
	8 August 2019
	C Programming A Modern Approach

	Programming Projects: 5
*/

#include <stdio.h>

int main(void)
{
	int x;
	printf("---------------------------------------------------");
	printf("\nf(x) = 3(x)^5 + 2(x)^4 - 5(x)^3 - (x)^2 + 7(x) - 6 \n");
	printf("To calucate f(x) put the value of x: ");
	scanf("%d", &x);
	printf(" f(%d) = %d\n", x, 3*(x * x * x * x * x) + 2*(x * x * x * x) - 5*(x * x * x) - (x * x) + 7*( x ) - 6);
}
