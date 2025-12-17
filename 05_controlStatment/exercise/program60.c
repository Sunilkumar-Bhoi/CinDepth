/*write a program that input integer n and display an n-by-n checkerboard.if the value of n is 5, the pattern woulf be
* * * * *
 * * * * *
* * * * *
 * * * * *
* * * * * 
*/
#include<stdio.h>
int main(void){
	int i,j,n;
	printf("Enter integer :");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=n; j++)
		{
			if(i%2==0)
				printf(" *");
			else	
				printf("* ");
		}
		printf("\n");
	}
	return 0;
}