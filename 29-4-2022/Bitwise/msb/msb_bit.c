#include"main.h"
void msb_bit(int num)
{
	if((num >> (SIZE-1))& 1)
	printf("MSB OF %d IS SET\n", num);
	else
	printf("MSB OF %d IS NOT SET\n", num);
}


