#include"main.h"
void get_nth_bit(int num, int n)
{
	int num1 = num;
	num = ((num >>n) & 1);
	printf("The %dth bit of %d is %d \n",n,num1, num); 
}


