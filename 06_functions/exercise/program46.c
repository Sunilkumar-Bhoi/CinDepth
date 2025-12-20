/*amicable number: if the sum of perfect divisor is equal of two number
write a function that print pair of amicable number in range*/
#include<stdio.h>
void printDivisor(int x,int y);
int sumPdivisor(int n);
int main(void)
{
	int a,b;
	printf("Enter range(min-max): ");
	scanf("%d%d",&a,&b);
	printDivisor(a,b);
	return 0;
}
void printDivisor(int x, int y)
{
	for(int i=x; i<=y; i++)
	{
			int a=sumPdivisor(i);
			if(a>i && a<=y)
			{
				int b=sumPdivisor(a);
				if(b==i)
					printf("%d %d\t",i,a);
			}
	}
}
int sumPdivisor(int n)
{
	int sum=0;
	for(int i=1; i<=n/2; i++)
	{
		if(n%i==0)
			sum+=i;
	}
	return sum;
}