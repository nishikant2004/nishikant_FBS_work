//10. Print a hollow square with diagonal pattern Input: n = 5 
//Output: 
//* * * * * 
//* *     * 
//*   *   * 
//*     * * 
//* * * * *
#include<stdio.h>
void main()
{
	int n;
	printf("Enter the value of N:");
	scanf("%d",&n);
	int s=1;
	for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            // Print '*' if it's the first or last row or column
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
            {
            	if(i==s && j==s || i==n && j==s ||i==n && j==s)
            		printf("* ");
            	else
            		printf("  "); 
			}
                
        }
        s++;
        printf("\n");
    }
}