//9. Print a hollow square pattern
//Input: n = 4
//Output:
//
//* * * *
//*     *
//*     *
//* * * *
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	// This logic is only conrect for only 4 as a input.but for the universal input 2nd is used.
//	for(int i=1;i<=n;i++)
//	{
//			if(i==2 || i==3)
//			{
//				printf("* ");
//				for(int k=1;k<n-1;k++)
//				{
//					printf("  ");
//					
//				}
//				printf("* ");
//				//printf(" ");
//			}
//			else{
//				for(int j=1;j<=n;j++)
//				{
//					printf("* ");
//					//printf(" ");
//				}
//			}
//		printf("\n");
//	}
	for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            // Print '*' if it's the first or last row or column
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");  // Print space inside
        }
        printf("\n");
    }
}