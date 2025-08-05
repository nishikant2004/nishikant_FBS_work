//10. Write a program to check the string is palindrome or not.
#include<stdio.h>
#include<string.h>
void main()
{
	char str[50];
	printf("Enter the String1.");
	scanf("%s",&str);
	int len=strlen(str);
	int flag=0,i;
	for(i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-1-i])
		{
			flag=1; 
			break;
		}  	
	}
	if(flag==0)
		printf("the string is palindrome");
	else
		printf("the string is not palindrome");
	
}