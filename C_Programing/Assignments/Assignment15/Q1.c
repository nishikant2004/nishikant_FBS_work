//1. Create a structure Book with data members as bname, id, author, price. Accept the
//values of all these members from user and display them.
#include<stdio.h>
typedef struct Book
{
	int id;
	char bname[20];
	char auther[20];
	int price;
	
}Book;

Book storeBook();
void display(Book temp);
void main(){
	Book b1,b2,b3;
	
	b1=storeBook();
	display(b1);
	
	b2=storeBook();
	display(b2);
	
	b3=storeBook();
	display(b3);
	
}
Book storeBook()
{
	Book temp;
	
	printf("\nEnter the id of the Book:");
	scanf("%d",&temp.id);
	
	fflush(stdin);
	printf("Enter the name of the Book:");
	gets(temp.bname);
	
	printf("Enter the author of the Book:");
	gets(temp.auther);
	
	fflush(stdin);
	printf("Enter the price of the Book:");
	scanf("%d",&temp.price);	
	
	return temp;
}
void display(Book temp)
{
	printf("\nid=%d ",temp.id);
	printf("Book Name=%s ",temp.bname);
	printf("Auther=%s ",temp.auther);
	printf("Price=%d \n",temp.price);
}