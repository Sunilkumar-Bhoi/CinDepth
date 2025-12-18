#include<stdio.h>
int func(int a, int b, int c);
int main(void)
{
	int x;
	x=func(2,3,4);
	printf("%d\n",x);//4
	return 0;
}
int func(int a,int b,int c)
{
	return a,b,c; /*comma operator return right most value*/
}
