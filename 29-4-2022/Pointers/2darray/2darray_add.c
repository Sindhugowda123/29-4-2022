#include"main.h"

int two_d_array(int row, int col, int arr[][col])
{
                int sum=0;
		int (*ptr)[col]=arr;
		printf("Enter %d array elements : ", row*col);
		for(int i = 0; i < row; i++)
		{
				for(int j = 0; j < col; j++)
				{
						scanf("%d", *(ptr+i)+j);
				}
		}

		for(int i = 0; i < row; i++)
		{
				for(int j = 0; j < col; j++)
				{
						sum = sum + *(*(ptr+i)+j);
				}
		}
		printf("2darray sum = %d\n", sum);
}
