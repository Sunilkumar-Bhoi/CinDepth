#include<stdio.h>
int func(int x, int b)
{
	if(x==5)
		b=b+2;
	else if(x>5)
		b=b+10;
	else;
	return b;
}
int main(void)
{
	printf("%d",func(1,2));
	return 0;
}
