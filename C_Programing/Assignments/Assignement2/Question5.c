//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.
#include<stdio.h>
void main()
{
	double price;
	char student;
	printf("If you are student then type Y and not then type N :");
	scanf("%c",&student);
	double purchase;
	printf("Enter the purchase value :");
	scanf("%lf",&purchase);
	if(student=='Y')
	{
		if(purchase>500)
		{
			price=purchase-purchase*0.20;
			printf("%lf",price);	
		}
		else
		{
			price=purchase-purchase*0.10;
			printf("%lf",price);	
		}
	}
	else
	{
		if(purchase>600)
		{
			price=purchase-purchase*0.15;
			printf("%lf",price);	
		}
		else
		{
			price=purchase;
			printf("%lf",price);	
		}
	}
}