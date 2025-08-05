#include<stdio.h>
#include<string.h>
char* mystrncpy(char* dest,char* src,int n);
void main()
{
	char str1[50];
	printf("Enter the String.");
	scanf("%s",&str1);
	char str2[50];
	int n;
	printf("\nEnter the number of character to copy.");
	scanf("%d",&n);
	char* dest=mystrncpy(str2,str1,n);
	printf("\n%s",dest);
}
char* mystrncpy(char* dest,char* src,int n)
{
	char* temp=dest;
	int i=0;
	while(i!=n)
	{
		dest[i]=src[i];
		i++;
	}
	
	return dest;
}