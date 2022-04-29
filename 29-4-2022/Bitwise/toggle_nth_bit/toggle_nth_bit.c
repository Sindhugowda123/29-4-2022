#include"main.h"
void toggle_nth_bit(int num, int n)
{
	int num1 = num;
	num = num ^ (1<<n);
	printf("The %dth bit of %d is toggled\n",n,num1);
        printf("After toggling the new value of num is %d\n", num);	
}


