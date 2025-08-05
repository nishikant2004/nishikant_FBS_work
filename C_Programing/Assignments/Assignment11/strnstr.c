//mystrstr funtion:find the first occurence of the substring and return its address upto certain number of character.
#include<stdio.h>
char* mystrstr(char* str1,char* str2,int n);
void main()
{
	char str1[50];
	printf("Enter the String.");
//	scanf("%s",&str1);
	gets(str1);
	char str2[50];
	printf("Enter the substring to enter:");
	scanf("%s",&str2);
	int n;
	printf("Enter the n:");
	scanf("%d",&n);
	char* res=mystrstr(str1,str2,n);
	if(res!=NULL)
	{
		printf("%s",res);
	}
	else
	{
		printf("Substring Not found");
	}
}
char* mystrstr(char* str1,char* str2,int n)
{
	int i=0;
	while(i!=n)
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
		i++;
	}
	return NULL;
	
}