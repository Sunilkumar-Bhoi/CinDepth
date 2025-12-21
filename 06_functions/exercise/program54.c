/*Write a program to print twin primes less than 1000. If two consecutive odd numbers are both prime (eg. 17, 19) then
they are known as twin primes*/
#include<stdio.h>
#include<math.h>
void twinPrime(void);
int prime(int n);
int main(void)
{
	printf("Twin prime less than 1000: ");
	twinPrime();
	return 0;
}
void twinPrime(void)
{
	int i,j;
	for(i=2; i<=998; i++)
	{
		if(i%2==0 && i!=2)
			continue;
		if(prime(i) && prime(i+2))
			printf("(%d,%d)  ",i,i+2);
	}
}
int prime(int n)
{
	int j;
	for(j=2;j<=sqrt(n); j++)
	{
		if(n%j==0)
		{
			return 0;
		}
	}
	return 1;
}