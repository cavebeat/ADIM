/*+++++++++
1A - Celsius to Reaumur
+++++++++*/
///C library to perform Input/Output operations
///http://www.cplusplus.com/reference/cstdio/

#include <stdio.h>

///take two parameters, an int for the argument count, and an array of char * strings for the arguments. 
int main(int argc, char *argv[])
{	
	float 	celsius = 0,
		reaumur = 0;
	
	printf("please enter temperature in °C:");	
	scanf("%f", &celsius);	
	reaumur = celsius * 0.8;
	

	printf("%f °C == %.2f °Re\n",celsius, reaumur);	

	return 0;
}
