#include"main.h"

int main()
{
		int row,col;
		printf("Enter row value of an array : ");
		scanf("%d", &row);
		printf("Enter column value of an array : ");
		scanf("%d", &col);
		int arr[row][col];
                two_d_array(row, col, arr);

}

