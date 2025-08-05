// myStrchar function
#include<stdio.h>
char* mystrchr(char* str1,char ch);
void main()
{
	char str1[50];
	printf("Enter the string to enter:");
	scanf("%s",&str1);
	char ch;
	printf("Enter the Character:");
	scanf(" %c",&ch);
	char* at=mystrchr(str1,ch);
	printf("%s",at);
}
char* mystrchr(char* str1,char ch)
{
	int i=0;
	while(str1[i]!='\0')
	{
		if(str1[i]==ch)
		{
			return &str1[i];
		}
		i++;
		
	}
	return NULL;
}