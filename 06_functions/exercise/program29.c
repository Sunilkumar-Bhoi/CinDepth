/*rewrite the function without using else and variable x*/
#include<stdio.h>
int func(int a, int b);
int f1(int x, int y);
int f2(int x, int y);
int main(void)
{
	int a,b;
	printf("Enter a and b :");
	scanf("%d%d",&a,&b);
	printf("%d",func(a,b));
	return 0;
}
int func(int a, int b)
{
	if(a==b)
		return f1(a,b);
	return f2(a,b);
}
int f1(int x, int y)
{
	return x+y;
}
int f2(int x, int y)
{
	return x-y;
}