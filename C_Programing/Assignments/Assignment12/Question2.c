//2. WAP Replace all Occurrences of ‘a’ with $ in a String
#include<stdio.h>
void main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",&str);
	char ch;
	printf("Enter the character to replace:");
	scanf(" %c",&ch);
	char*ptr=str;
	int flag=0;
	while(*ptr!='\0')
	{
		if(*ptr==ch)
		{
			flag=1;
			*ptr='$';
		}
		ptr++;
	}
	if(flag==0)
		printf("character not found");
	else
		printf("replaced %s",str);
	
}