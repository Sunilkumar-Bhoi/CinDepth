#include<stdio.h>
int func(int a,int b,int c);
int main(void)
{
	int s;
	s=func(1,2);//few few argument
	printf("%d\n",s);
	s=func(1,2,3,4);//too many arguement
	printf("%d\n",s);
	return 0;
}
int func(int a,int b,int c)
{
	return a+b+c;
}
