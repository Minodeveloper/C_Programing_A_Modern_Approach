/*
	24 August 2019
	Book: C Programming A Modern Approach

	Programming Projects: 5
*/

#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4,
	    num5, num6, num7, num8,
	    num9, num10, num11, num12,
	    num13, num14, num15, num16;
	
	printf("Enter the number from 1 to 16 in any order\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4,
						  &num5, &num6, &num7, &num8,
						  &num9, &num10, &num11, &num12,
						  &num13, &num14, &num15, &num16);
	printf("\n");
	printf("%4d%4d%4d%4d\n%4d%4d%4d%4d\n%4d%4d%4d%4d\n%4d%4d%4d%4d\n",
	        num1, num2, num3, num4, num5, num6, num7, num8,
		num9, num10, num11, num12, num13, num14, num15, num16);

	printf("ROW SUM     : %4d %4d %4d %4d\n",(num1+num2+num3+num4),
					       (num5+num6+num7+num8),
					       (num9+num10+num11+num12),
					       (num13+num14+num15+num16));
	
	printf("COLUMN SUM  : %4d %4d %4d %4d\n",(num1+num5+num9+num13),
					       (num2+num6+num10+num14),
					       (num3+num7+num11+num15),
					       (num4+num8+num12+num16));
	
	printf("DIAGINAL SUM: %4d %4d\n", (num1+num6+num11+num16),
					  (num13+num10+num7+num4));

	return 0;

}
