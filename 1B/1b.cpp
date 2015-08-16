/*+++++++++
1B - input radius - calculate scope and area of a circle
+++++++++*/

#include <stdio.h>
#include <math.h>	//	http://www.cplusplus.com/reference/cmath/

int main(int argc, char *argv[])
{
	float 	radius = 0,
		scope = 0,
		area = 0;
	
	printf("Calculate scope and area of a circle");
	printf("\nPlease enter radius: ");
	scanf("%f", &radius);	

/***
	scope = 2 x pi x radius
*/
	scope = 2 * radius * M_PI;
	printf("\nScope: %.2f", scope);

/***
	area = radius x radius x pi
*/

	area = radius * radius * M_PI;
	printf("\nArea: %.2f\n", area);

	return 0;
}

