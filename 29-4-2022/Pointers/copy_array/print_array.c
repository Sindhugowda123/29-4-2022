#include"main.h"
int print_array(int *arr2, int size)
{
	printf("Elements copied to arr2 from arr1 are : ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}
