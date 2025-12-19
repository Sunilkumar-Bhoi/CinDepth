/*write a function sumPdivisor() that find the sum of proper divisior of number.Proper divisors of a number are
those numbers by which the number is divisible, except the number itself. For example proper divisors of 36 are 1, 2, 3, 4, 6,
9 , 18.*/
#include<stdio.h>
int sumPdivisor(int n);
int main(void)
{
	int num; 
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("sum of proper divisor of %d = %d",num,sumPdivisor(num));
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