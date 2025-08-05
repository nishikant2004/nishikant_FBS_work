//10. Product (id, name, quantity, price)
#include<stdio.h>
#include<string.h>
struct Product
{
	int id;
	char name[20];
	int quantity;
	int price;
};
void main()
{
	struct Product p1;
	p1.id=12;
	strcpy(p1.name,"Dettol");
	p1.quantity=20;
	p1.price=2000;
	
	printf("Product id=%d, name=%s, quantity=%d, price=%d",p1.id,p1.name,p1.quantity,p1.price);
	
	struct Product p2;
	
	printf("\nEnter the product id:");
	scanf("%d",&p2.id);
	
	fflush(stdin);
	printf("\nEnter the product name:");
	gets(p2.name);
	
	
	printf("\nEnter the product quantity:");
	scanf("%d",&p2.quantity);
	
	printf("\nEnter the product price:");
	scanf("%d",&p2.price);
	
	printf("Product id=%d, Name=%s, quantity=%d, price=%d",p2.id,p2.name,p2.quantity,p2.price);
}