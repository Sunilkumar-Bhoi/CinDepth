/*write a single function to print both amicable pair and perfect number*/
#include<stdio.h>
void func(int a,int b)
{
	
	for(int i=a; i<=b; i++)
	{
		int sum1=0;
		for(int j=1; j<=i/2; j++){
			if(i%j==0)
			{
				sum1+=j;
			}	
		}
		if(sum1==i)
		{	
			printf("perfect number: %d\n",i);
		}
		int sum2=0;
		if(sum1>i && sum1<=b)
		{
			for(int k=1;k<=sum1/2; k++)
			{
				if(sum1%k==0)
					sum2+=k;
			}
		}
		if(i==sum2)
			printf("amicable pair: %d %d",i,sum1);
	}
}
int main(void)
{
	int a,b;
	printf("Enter range(min-max): ");
	scanf("%d%d",&a,&b);
	func(a,b);
	return 0;
}
