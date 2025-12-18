#include<stdio.h>
void func(int x, int y);
int main(void)
{
	int x;
	x=func(5,6)=100;//expression is not assigneble and also we cant assiign void function to any variable
	printf("%d",x);
	return 0;
}
void func(int x,int y)
{
	int z;
	z=x+y;
}