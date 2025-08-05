//mystrlen function 
#include<stdio.h>
int mystrlen(char* str);
void main()
{
	char str[]={"nishikant"};
	int length=mystrlen(str);
	printf("%d",length);
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