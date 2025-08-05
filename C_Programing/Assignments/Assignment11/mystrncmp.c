//mystrncmp funcion
#include<stdio.h>
#include<string.h>
int mystrcmp(char* str1,char*str2,int);
void main()
{
	char str1[50];
	printf("Enter the string to enter:");
	scanf("%s",&str1);
	char str2[50];
	printf("Enter the string to enter:");
	scanf("%s",&str2);
	int n;
	printf("Enter the number of character to compare:");
	scanf("%d",&n);
	
	int res=mystrcmp(str1,str2,n);
	if(res==0)
		printf("Both are equal");
	else if(res>0)
		printf("str1 is greater");
	else if(res<0)
		printf("str1 is smaller");
}
int mystrcmp(char* str1,char*str2,int n)
{
	int i=0;
	while(i!=n)
	{
		if(str1[i]!=str2[i])
		{
			int res=str1[i]-str2[i];
			return res;
		}
		i++;
	}
	//return str1[i]-str2[i]; this statement voilets the rule. that it is comparing the nth index element which giving incorrect output.
	return 0;
}
//analyse it properly
