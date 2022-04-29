#include"main.h"
int main()
{
	int a,b,size;
	printf("Enter a value : \n");
	scanf("%d", &a);
	printf("Enter b value : \n");
	scanf("%d", &b);
	printf("Before swapping : \n");
	printf("a = %d b = %d\n", a, b);
	swap(&a, &b);
	printf("After swapping : \n");
	printf("a = %d b = %d\n", a, b); 
}
