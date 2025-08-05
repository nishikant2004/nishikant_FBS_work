//strlower function converts the uppercase character into lowercase.
#include<stdio.h>
char* mystrlower(char* str);

void main()
{
	char str[50];
	printf("Enter the string.");
	gets(str);
	char* lower=mystrlower(str);
	printf("%s",lower);
	
}
char* mystrlower(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+32;
		}
		i++;
	}
	return str;
}