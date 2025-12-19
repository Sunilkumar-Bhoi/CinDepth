/*a number is called perfect if the sum of proper divisors of that number is equal to the number.for example perfect number, since 28 1+2+4+7+14=28.write a program to print all the perfect numbers in agiven range*/
#include<stdio.h>
void PrintNumber(int a,int b);
int sumPdivisor(int n);
int main(void)
{
	int a,b;
	printf("Enter range(small-large) :");
	scanf("%d%d",&a,&b);
	PrintNumber(a,b);
	return 0;
}
void PrintNumber(int a, int b)
{
	for(int i=a; i<=b; i++)
	{
		if(sumPdivisor(i)==i)
			printf("%d ",i);
	}
}
int sumPdivisor(int n){
	int sum=0;
	if(n==1)
		return 0;
	for(int i=1; i<=n/2; i++)
	{
		if(n%i==0)
			sum+=i;
	}
	return sum;
}
