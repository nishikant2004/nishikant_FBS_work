//8.WAP to Calculate the Number of Words Present in a String
#include<stdio.h>
int NoOfWords(char* str1);
void main()
{
	char str1[50];
	printf("Enter the String:");
	gets(str1);
	int res=NoOfWords(str1);
	printf("%d",res);
}
int NoOfWords(char* str1)
{
	int count=0,i=0;
	while(str1[i]!='\0')
	{
		if(i==0 && str1[i]!=' '||str1[i]!=' '&& str1[i-1]==' ')
		{
			count++;
		}
		i++;
	}
	return count;
}
