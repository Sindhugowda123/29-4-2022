//WAP to to copy all elements from an array to another array.

#include"main.h"
int main()
{
		int size;
		printf("Enter size of an array : ");
		scanf("%d", &size);
		int arr1[size];
		int arr2[size];
		copy_array(arr1, arr2, size);
		print_array(arr2, size);
}
