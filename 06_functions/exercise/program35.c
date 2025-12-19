#include<stdio.h>
int func(int a,int b)
{
	a=a-b;
	if(a!=0)
		a++;
	return a;
}
int main(void)
{
	printf("%d",func(11,10));
	return 0;
}
