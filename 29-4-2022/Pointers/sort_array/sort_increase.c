#include"main.h"
void sort_increase(int *arr, int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Array elements in increasing order : ");
	for(int i=0;i<len;i++)
	{
	printf("%d ", arr[i]);
	}
	printf("\n");
}
