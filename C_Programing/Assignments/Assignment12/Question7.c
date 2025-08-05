//WAP to Remove the Characters of Odd Index Values in a String
//3. WAP to Remove the nth Index Character from a Non-Empty String
#include<stdio.h>
char* removeoddchar(char* str);

void main()
{
	char str[20];
	printf("Enter the string:");
	scanf("%s",&str);
	char* res=removeoddchar(str);
	printf("res=%s",res);
}
char* removeoddchar(char* str)
{
	int i=0,j=0;
	while(str[i]!='\0')
	{
	 	if(i%2==0)
	 	{
	 		str[j]=str[i];
			j++;	
		}	
		i++;
	}
	str[j]='\0';
	return str;
}
		