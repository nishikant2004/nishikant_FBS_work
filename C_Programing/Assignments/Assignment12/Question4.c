//4. WAP to Form a New String where the First Character and the Last Character have
//been Exchanged
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];
	printf("Enter the string:");
	scanf("%s",&str1);
	int len=strlen(str1);
	printf("\n%d",len);
	char str2[20];
	strcpy(str2,str1);
	char temp=str2[0];
	str2[0]=str2[len-1];
	str2[len-1]=temp;
	printf("\n%s",str1);
	printf("\n%s",str2);
}