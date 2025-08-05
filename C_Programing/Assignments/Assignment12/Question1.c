//1. Write a program to scan string from user then scan a single character and search it
//in a accepted string.
#include<stdio.h>
void main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",&str);
	char ch;
	printf("Enter the character to search:");
	scanf(" %c",&ch);
	char*ptr=str;
	int index=0;
	while(*ptr!='\0')
	{
		if(*ptr==ch)
		{
			printf("at index %d",index);
			break;
		}
		ptr++;
		index++;
	}
	if(*ptr=='\0')
		printf("character not found");
	
	
}