#include<stdio.h>
void func(int a, int b);
int main(void)
{
	int i=5,j=10;
	func(i/2,j%3);//2,1
	return 0;
}
void func(int a, int b)
{
	a/=2;//1
	b--;//1
	printf("%d\t",a+b);//1
}
