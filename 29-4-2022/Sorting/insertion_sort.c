#include<stdio.h>

#define ARRAY_SIZE 5

void insertion_sort(int arr[])
{
		int i,j,temp;
		for(i=1;i<ARRAY_SIZE;i++)
		{
				temp = arr[i];
				j = i-1;
		while(arr[j] >= temp && j >= 0)
		{
				arr[j+1] = arr[j];
				j = j-1;
		}
		arr[j+1] = temp;
		}
		for(int k = 0; k < ARRAY_SIZE; k++)
		{
				printf("%d ", arr[k]);
		}
		printf("\n");
}

int main()
{
		int arr[ARRAY_SIZE] = {2, 4, 1, 8, 3};
		printf("Before sorting : ");
		for(int i=0;i<ARRAY_SIZE;i++)
		{
				printf("%d ", arr[i]);
		}
		printf("\nAfter sorting : ");
		insertion_sort(arr);
}

/*Time complexity : 
Average and worst case = O(n2)
Best case = O(n), if array elements are already sorted
Space complexity = O(1)
*/
