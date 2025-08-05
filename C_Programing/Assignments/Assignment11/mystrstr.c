//mystrstr funtion:find the first occurence of the substring and return its address.
#include<stdio.h>
char* mystrstr(char* str1,char* str2);
void main()
{
	char str1[50];
	printf("Enter the String.");
	scanf("%s",&str1);
	char str2[50];
	printf("Enter the substring to enter:");
	scanf("%s",&str2);
	char* res=mystrstr(str1,str2);
	if(res!=NULL)
	{
		printf("%s",res);
	}
	else
	{
		printf("Substring Not found");
	}
}
char* mystrstr(char* str1,char* str2)
{
	while(*str1!='\0')
	{
		if(*str2=='\0')
			return str1;
		char*start=str1;
		char*sub=str2;
		while(*start==*sub)
		{
			//printf("\n%c",*start);
			//printf("\n%c",*sub);
			start++;
			sub++;
			if(*sub=='\0')
				return str1;	
		}
		str1++;
	}
	return NULL;
	
}