#include<stdio.h>
int func(int k);
int main(void)
{
	int i=0,k=3;
	i+=func(k);//-1
	i+=func(k);//-4
	i+=func(k);//-7
	printf("%d\n",i);//12
	return 0;
}
int func(int k)
{
	static int m=2;
	m=m-k;
	return m;
}