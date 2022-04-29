#include"main.h"
void string_copy(char *str1, char *str2)
{

	char* ptr1 = str1;
	char *ptr2 = str2;
	int i=0;
	for(i=0;i<strlen(str1);i++)
	{
		*ptr2 = *ptr1;
		ptr1++;
		ptr2++;
	}
	str2[i] = '\0';
	printf("Copied string str2 is : %s\n", str2);
}
