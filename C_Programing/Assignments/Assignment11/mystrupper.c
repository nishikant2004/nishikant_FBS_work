//convert all the lowercase charcter to uppercase
#include<stdio.h>
char* mystrupper(char* str);
void main()
{
	char str[50];
	printf("Enter the string:");
	gets(str);
	char* upper=mystrupper(str);
	printf("%s",upper);
}
char* mystrupper(char* str)
{
	int i=0;
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-32;
		}
		i++;
	}
	return str;
}