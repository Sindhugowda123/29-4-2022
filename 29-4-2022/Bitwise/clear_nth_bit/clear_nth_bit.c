#include"main.h"
void clear_nth_bit(int num, int n)
{
	int num1 = num;
	num = num & ~(1<<n);
	printf("The %dth bit of %d is clear\n",n,num1);
        printf("After clearing the new value of num is %d\n", num);	
}


