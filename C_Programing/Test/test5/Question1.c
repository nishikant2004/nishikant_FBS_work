//wap to calculate selling price of book based on cost price and discout.(using function and nested if-else)
#include<stdio.h>
float findPrice(float ,float );
void main()
{
	float rPrice;
	printf("\nEnter the Retail price:");
	scanf("%f",&rPrice);
	float discount;
	printf("Enter the discount percentage:");
	scanf("%f",&discount);
	float res=findPrice(discount,rPrice);
	printf("selling price of book is %f",res);
}
float findPrice(float discount,float rPrice)
{
	discount=(discount/100)*rPrice;
	float price=rPrice-discount;
	return price;
}