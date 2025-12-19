/*write a function ProdDigit() that input a number and return the product of digit of that number*/
#include<stdio.h>
int ProdDigit(void);
int main(void)
{
	printf("Product : %d\n",ProdDigit());
	return 0;
}
int ProdDigit(void)
{	
	int num,prod=1,digit;
	printf("Enter a number: ");
	scanf("%d",&num);
	do
	{
		digit=num%10;
		prod=prod*digit;
		num/=10;
	} while (num>0);
	return prod;
}
