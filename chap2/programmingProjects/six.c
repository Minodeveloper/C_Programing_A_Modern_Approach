/*
	8 August 2019
	C Programming A Modern Approach

	Programming Projects: 6
*/

#include <stdio.h>

int main(void)
{
	int x;
	printf("---------------------------------------------------\n");
	printf("f(x) = 3(x)^5 + 2(x)^4 - 5(x)^3 - (x)^2 + 7(x) - 6 \n");
	printf("To calucate f(x) put the value of x: ");
	scanf("%d", &x);
	printf(" f(%d) = %d\n", x, 3*(x * x * x * x * x) + 2*(x * x * x * x) - 5*(x * x * x) - (x * x) + 7*( x ) - 6);
	printf("----------------------------------------------------\n");
	printf("Using Horner's Rule\n");
	int calculation = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
	printf("f(x) = ((((3x + 2)x - 5)x - 1)x + 7)x-6\n");
	printf("f(%d) = ((((3(%d)+2)(%d)-5)(%d)-1)(%d)+7)(%d)-6 = %d \n", x,x,x,x,x,x, calculation); 
}
