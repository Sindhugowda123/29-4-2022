#include"main.h"
void lsb_bit(int num)
{
	if(num & 1)
	printf("LSB OF %d IS SET\n", num);
	else
	printf("LSB OF %d IS NOT SET\n", num);
}


