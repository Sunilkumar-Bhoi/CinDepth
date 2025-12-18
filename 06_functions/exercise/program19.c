#include<stdio.h>
int func(int a,int b);
int main(void)
{
	int i=2,j=3;
	printf("%d\n",func(i,j));//7
	return 0;
}
int func(int a, int b)
{
	a=a-5;//-3
	b=b+5;//8
	return (!a + --b);//0 + 7
}
