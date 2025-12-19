#include<stdio.h>
int func(int a,int b)
{
	a=a-b;
	if(a!=2)
	{
		a++;
		return a;
	}
	a=a+b;
	printf("%d ",a);
	return b;
}
int main(void)
{
	printf("%d",func(12,10));
	return 0;
}
