#include<stdio.h>
int diff(int x, int y)
{
	return x-y;
}
int sum(int x,int y)
{
	return x+y;
}
int main(void)
{
	int a=20,b=5,c=3,d=6;
	printf("%d\t",a+diff(d,c));//23
	printf("%d\n",diff(a,sum(diff(b,c),d)));//12
	return 0;
}
