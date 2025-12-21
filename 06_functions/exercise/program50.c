/*Write a function Product ( ) that accepts two integers and retums their product. Don't use the * operator. Similarly
make two more functions Quotient. () and Remainder () that accept two integers and retum the quotient and
remainder respectively, without the use of / and % operators*/
#include<stdio.h>
int product(int x,int y);
int quotient(int x, int y);
int reminder(int x, int y);
int main(void)
{
	int a,b;
	printf("Enter two number: ");
	scanf("%d%d",&a,&b);

	/*function call for product function*/
	printf("Product of %d and %d = %d\n",a,b,product(a,b));

	/*function call for quotioent function*/
	printf("Quotioent of %d / %d =%d\n",a,b,quotient(a,b));

	/*function call for reminder function*/
	printf("reminder on %d / %d = %d\n",a,b,reminder(a,b));
	return 0;
}
int product(int x, int y)
{
	int i,sum=0;
	for(i=1; i<=x; i++)
	{
		sum+=y;
	}
	return sum;
}

int quotient(int x, int y)
{
	int count=0;
	while (x>=y)
	{
		x=x-y;
		count++;
	} 
	
	return count;
}

int reminder(int x, int y)
{
	while (x>=y)
	{
		x=x-y;
	} 
	return x;
}