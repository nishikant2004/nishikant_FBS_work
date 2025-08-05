//3. WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
char* removechar(char* str,int index);

void main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",&str);
	int index;
	printf("Enter the index where you want remove the character:");
	scanf("%d",&index);
	char* res=removechar(str,index);
	printf("res=%s",res);
}
char* removechar(char* str,int index)
{
	for(int i=index;str[i]!='\0';i++)
	{
	//	printf("%c\n",str[i]);
		str[i]=str[i+1];
	//	printf("%c\n",str[i]);			
	}
	return str;
}