#include"main.h"
void set_nth_bit(int num, int n)
{
	int num1 = num;
	num = num | (1<<n);
	printf("The %dth bit of %d is set to 1\n",n,num1);
        printf("After setting the value of num is %d\n", num);	
}


