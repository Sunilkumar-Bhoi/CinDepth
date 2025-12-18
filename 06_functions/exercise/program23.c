#include<stdio.h>
int func(int x,int y);
int main(void)
{
	int a=2,b=5;
	a=func(a+b,a-b);//7 -3
	printf("%d\n",a);//10
	return 0;
}
int func(int x,int y)
{
	return x+y,x-y;//comma operator x-y=10
}