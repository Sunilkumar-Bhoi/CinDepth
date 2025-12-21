/*Write a function to find the sum of this series upto n terms.
1 + 1/4 + 1/9 + 1/16 +.....*/
#include<stdio.h>
double series(int n);
int main(void)
{
	int n;
	printf("Enter value of n: ");
	scanf("%d",&n);
	printf("Sum of series upto n term = %.6lf",series(n));
	return 0;
}
double series(int n)
{
	int i;
	double sum=0.0;
	for(i=1; i<=n; i++)
	{
		sum=sum+1.0/((double)i*i);
	}
	return sum;
}