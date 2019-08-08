/*******************************************
*	8 August 2019			   *
*	C Programming A Modern Approach    *
*					   *
*	Programming Projects: 2		   *
********************************************/

#include <stdio.h>
#define fourBYthree ( 4.0f / 3.0f )
#define pie 3.414f
int main(void)

{
	float volume;
	int radius;
	
	printf("Input the radius: ");
	scanf("%d", &radius);
	
	volume = fourBYthree * pie * radius * radius * radius ;

	printf("The volume of a sphere with radius %d is %0.2f metre cubed\n", radius, volume);

}

