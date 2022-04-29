#include"main.h"
int copy_array(int* arr1, int* arr2, int size)
{
		printf("Enter elements of an array arr1: ");
		for(int i = 0; i < size; i++)
		{
				scanf("%d", &arr1[i]);
		}
		for(int i = 0; i < size; i++)
		{
				arr2[i] = arr1[i];
		}
}
