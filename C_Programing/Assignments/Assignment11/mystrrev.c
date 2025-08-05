//strrev function reverse the string and return it.
#include<stdio.h>
#include<string.h>
char* mystrrev(char* str);
void main()
{
	char str[50];
	printf("Enter the string.");
	gets(str);
	char* rev=mystrrev(str);
	printf("%s",rev);
	
}
char* mystrrev(char* str)
{
	int start=0;
	int end=strlen(str)-1;
	//printf("%d",end);
	while(start<end)
	{
		char temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	return str;
}