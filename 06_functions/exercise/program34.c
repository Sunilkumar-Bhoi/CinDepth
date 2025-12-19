#include<stdio.h>
int func(int a,int b)
{
	a=a-b;
	return a;
}
int main(void)
{
	printf("%d",func(10,10));
	return 0;
}
