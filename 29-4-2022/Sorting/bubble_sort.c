#include <stdio.h>
#define LEN 5
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int arr[], int size)
{
	int i,j,flag;
	for (i = 0; i < size-1; i++)
	{
		flag=0;
		for (j = 0; j < size-i-1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				swap(&arr[j], &arr[j+1]);
				flag=1;
			}
		}
		if (flag == 0)
			break;
	}
}

void print_array(int arr[], int size)
{
	printf("After sorting : ");
	for (int i=0; i < size; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[LEN] = {6, 3, 8, 7, 9};
	printf("Before sorting : ");
	for(int i=0;i<LEN;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	bubble_sort(arr, LEN);
	print_array(arr, LEN);
	return 0;
}


/*Time complexity : 
Average and worst case = O(n2)
Best case = O(n), if array elements are already sorted
Space complexity = O(1)
*/
