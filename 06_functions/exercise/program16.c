#include<stdio.h>
int main(void)
{
	int func(int a, int b)/*we can not define function in another function*/
	{
		return a+b;
	}
	int c;
	c = func(3,5);
	printf("%d\n",c);
	return 0;
}
