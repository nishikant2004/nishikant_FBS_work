//3. Write a program to create an array for 10 players. For each player store name, no. of
//matches played, runs, wickets takes.
//a. Create function to Accept the information of each player.
//b. Create function to display the information of all the players
//c. Display the information of player who made maximum runs and the one who took
//maximum number of wickets.
#include<stdio.h>
typedef struct Players
{
	char name[20];
	int matches;
	int runs;
	int wickets;
}Players;
void storeStruct(Players* arr,int n);
void displayStruct( Players arr);
void findmaxrun(Players* arr,int n);
void main()
{
	int n;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	fflush(stdin);
	Players arr[n];
	
	storeStruct(arr,n);
	for(int i=0;i<n;i++)
	{
		displayStruct(arr[i]);
	}
	
	findmaxrun(arr,n);
	
	
}
void storeStruct(Players* arr,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\nEnter the details of player %d",i+1);
		fflush(stdin);
		printf("\nEnter the name of players :");
		gets(arr[i].name);
		
		printf("Enter the matches played by players:");
		scanf("%d",&arr[i].matches);
	
		printf("Enter the runs of the player:");
		scanf("%d",&arr[i].runs);
		
		printf("Enter the wickets of the player:");
		scanf("%d",&arr[i].wickets);
	}	
}
void displayStruct( Players arr)
{
//	for(int i=0;i<n;i++)
//	{
//		printf("\nName = %s",arr[i].name);
//		printf("\nMatches= %d",arr[i].matches);
//		printf("\nRuns = %d",arr[i].runs);
//		printf("\nWickets = %d\n",arr[i].wickets);
//	}
		printf("\nName = %s",arr.name);
		printf("\nMatches= %d",arr.matches);
		printf("\nRuns = %d",arr.runs);
		printf("\nWickets = %d\n",arr.wickets);
}
void findmaxrun(Players* arr,int n)
{
	int index1=0;
	int maxrun=0;
	int index2=0;
	int maxwickets=0;
	for(int i=0;i<n;i++)
	{
		if(maxrun<arr[i].runs)
		{
			maxrun=arr[i].runs;
			index1=i;
		}
		if(maxwickets<arr[i].wickets)
		{
			maxwickets=arr[i].wickets;
			index2=i;
		}
	}
//	printf("\nThe Player who made the maximum number of Runs:");
//	printf("\nName = %s",arr[index].name);
//	printf("\nMatches= %d",arr[index].matches);
//	printf("\nRuns = %d",arr[index].runs);
//	printf("\nWickets = %d\n",arr[index].wickets);
	printf("\nThe Player who made the maximum number of Runs:");
	displayStruct(arr[index1]);
	printf("\nThe Player who take the maximum number of Wickets:");
	displayStruct(arr[index2]);
}