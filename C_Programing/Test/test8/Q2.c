//write a user define function to reverse string.
#include<stdio.h>
#include<string.h>
char* myreverse(char* str1);
void main()
{
	char str1[20];
	printf("Enter the string:");
	gets(str1);
	char* res=myreverse(str1);
}
char* myreverse(char* str1)
{
	int len=strlen(str1);
	int i=0;
	while(str1[i]!='\0')
	{
		str1[i]=str1[len-i-1];
		i++;
	}
	printf("%s",str1);
	return str1;
}

