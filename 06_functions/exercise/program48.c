#include<stdio.h>
int sumPdivisor(int n);
int isprime(int n);
int main(void)
{
	int num; 
	printf("Enter a number: ");
	scanf("%d",&num);
	if(isprime(num))
		printf("prime number\n");
	else 
		printf("not prime number\n");
	return 0;
}
int isprime(int n){
	if(n<=1)
		return 0;
	if(sumPdivisor(n)==1)
		return 1;
	return 0;
}
int sumPdivisor(int n)
{
	int sum=0;
	for(int i=1; i<=n/2;i++)
	{
		if(n%i==0)
			sum+=i;
	}
	return sum;
}