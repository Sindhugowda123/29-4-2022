#include <stdio.h>  
#define LEN 5
void selection_sort(int arr[], int size)  
{  
	int i,j,temp,num;  
	for (i = 0; i < size; i++)     
	{  
		num = i;   
		for (j = i+1; j < size; j++)
		{	
			if (arr[j] < arr[num])  
			{
				num = j;
			}
		}	
			temp = arr[num];  
			arr[num] = arr[i];  
			arr[i] = temp;
	}  
}  

void print_array(int arr[], int size)   
{  
	for (int i = 0; i < size; i++)
	{	
		printf("%d ", arr[i]);  
	}
}  

int main()  
{  
	int arr[LEN] = { 4,2,8,7,3};   
	printf("Before sorting : ");  
	print_array(arr, LEN);  
	selection_sort(arr, LEN);   
	printf("\nAfter sorting : ");	
	print_array(arr, LEN);
	printf("\n");	
}   

/*Time complexity : 
Best and Average case = O(n2)
Worst case = O(n2)
Space complexity = O(1)
*/

