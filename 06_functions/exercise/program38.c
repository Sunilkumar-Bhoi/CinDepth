#include<stdio.h>
int func(int m, int n)
{
	if(m==5)
		return n-10;
	if(m>5)
		return n+20;
	return n;
}
int main(void)
{
	printf("%d",func(2,4));
	return 0;
}
