/*+++++++++
1C - input angle(degree) and calculate angle(radian)
+++++++++*/

#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{	
	float	degree, 
		rad;
	printf("Please enter angle in degrees: ");	
	scanf("%f", &degree);
	rad = degree * M_PI;
	rad = rad / 180 ;
	printf("Degree in radian: %f\n",rad);
	return 0;
}

