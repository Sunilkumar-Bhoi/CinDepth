#include<stdio.h>
int func(int n);
int main(void)
{
	printf("%d ",func(2));//3
	printf("%d ",func(5));//18
	printf("%d ",func(2));//21
	return 0;
}
int func(int n)
{
	static int s=0;
	int i=1;
	for(i=1; i<=n; i++)
	{
		s+=i;
	}
	return s;
}