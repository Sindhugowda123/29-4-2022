#include"main.h"
int str2_len(char *str2)
{
	char *ptr2 = str2;
	int count = 0,i = 0;
	while(str2[i] != '\0')
	{
		count++;
		i++;
	}
	return count;
}
