#include<stdio.h>
int abs(int a)
{
	return (a<0)?(-a):a;
}
int main(void)
{
	printf("%d",abs(-1));
	return 0;
}
