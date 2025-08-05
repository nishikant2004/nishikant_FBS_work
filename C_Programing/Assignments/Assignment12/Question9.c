//9. WAP to Take in Two Strings and Display the Larger String without Using Built-in
//Functions
#include<stdio.h>
int mystrlen(char* str);
void main()
{
	char str1[50];
	printf("Enter the String1.");
	scanf("%s",&str1);
	char str2[50];
	printf("Enter the string2:");
	scanf("%s",&str2);
	int len1=mystrlen(str1);
	int len2=mystrlen(str2);
	if(len1>len2)
		printf("string 1 is greater,lenth=%d",len1);
	else if(len1<len2)
		printf("string 2 is greater,lenth=%d",len2);
	else
		printf("both are Equal,lenth=%d",len1);
}
int mystrlen(char* str)
{
	int len=0;
	for(int i=0;str[i]!='\0';i++)
	{
		len++;
	}
	return len;
	//here you can also take an while loop which will more helpfull an easy to understand.n
}