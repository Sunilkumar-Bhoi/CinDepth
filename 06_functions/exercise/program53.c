/*Write a function to find the sum of this series upto n terms.
1 + 1/4 + 1/9 + 1/16 +.....*/
#include<stdio.h>
float series(int n);
int main(void)
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Sum of series upto n term = %.2f",series(n));
	return 0;
}
float series(int n)
{
	int i;
	float sum=0;
	for(i=1; i<=n; i++)
	{
		sum=sum+(float)1/(i*i);
	}
	return sum;
}