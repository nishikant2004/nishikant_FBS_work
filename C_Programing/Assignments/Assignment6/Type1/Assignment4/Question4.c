//4. Print strong numbers in the given range 1 to n.
//A number is called a Strong Number if:
//sum of factorial of digits = original number
#include<stdio.h>
void isStrong();
void main()
{
	isStrong();
}
void isStrong()
{
	int n;
	printf("Enter the number :");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		int fact,sum=0,temp=i,digit;
		while(temp>0)
		{
			digit=temp%10;
		//	printf("%d is digit\n",digit);
			fact=1;
			int j=1;
			while(j<=digit)
			{
				fact=fact*j;
				j++;
			}
		//	printf("%d is fact\n ",fact);
			sum+=fact;
		//	printf("%d is sum\n",sum);
		
		
			temp=temp/10;
		//	printf("%d is temp \n",temp);
				
		}
		if(i==sum)
		printf("%d is a strong number \n",i);
	}
}