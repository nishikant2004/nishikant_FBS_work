//program to built the own strncat function.
#include<stdio.h>
#include<string.h>
char* mystrcat(char* dest,const char* src,int n);
void main()
{
	//building the strcat function.
	char st1[30]={"Nishikant"};
	char st2[]={" Khambalkar"};
	int n;
	printf("Enter the n number of character to append:");
	scanf("%d",&n);
	char* mystr=mystrcat(st1,st2,n);
	printf("%s",mystr);
}
char* mystrcat(char* dest,const char* src,int n)
{	
	int i=0;
	int len=strlen(dest);
	//printf("%d",len);
	while(src[i]!=src[n])
	{
		dest[len+i]=src[i];
		i++;
	}
	//dest[len+i]='\0';
	return dest;
}