#include<stdio.h>
int ProdDigit(int n);
int MPresistance(void);
int MDR(int n);
int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("MDR %d\t",MDR(num));
	printf("MPresistance  %d\n",MPresistance());
	return 0;
}
int ProdDigit(int n)/*product of digits*/
{
	int prod=1;
		do
		{
			prod=prod*(n%10);
			n/=10;
		} while (n>0);
	return prod;
}

int MDR(int n)
{
	while(n>9)
	{	
		n=ProdDigit(n);
		MPresistance();
	}
	return n;
}
int MPresistance(void)
{
	static int count=-1;
	count++;
	return count;
}