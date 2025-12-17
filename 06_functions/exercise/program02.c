#include<stdio.h>
void func(int a, int b);
int main(void)
{
	int x;
	x=func(2,3);/*a value of type "void" cannot be assigned to an entity of type "int"*/
	return 0;
}

void func(int a, int b)
{
	int s;
	s=a+b;
	return;
}
