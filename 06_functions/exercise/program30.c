/*rewrite the func() without using flag variable*/
#include<math.h>	
#include<stdio.h>
int func(int n);
int main(void)
{
	int n;
	printf("Enter number: ");
	scanf("%d",&n);
	printf("%d ",func(n));
	return 0;
}
int func(int n)
{
	int i;
	for(i=2; i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 1;
		}
	}
	return 0;
}