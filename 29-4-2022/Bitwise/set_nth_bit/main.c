#include"main.h"
int main()
{
	int num,n;
	printf("Enter num value : ");
	scanf("%d", &num);
	printf("Enter nth value : ");
	scanf("%d", &n);
	set_nth_bit(num,n);
}
