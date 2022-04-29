#include"main.h"
int main()
{
	char str1[10],str2[10];
	int i;
	printf("Enter string : ");
	scanf("%s", str1);
	string_copy(str1,str2);
	int len = str2_len(str2);
	printf("Length of new string str2 = %d\n", len);
}
