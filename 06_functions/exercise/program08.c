#include<stdio.h>
int min(int a,int b);
int main(void)
{
	int a=10,b=5;
	printf("%d\n",min(a,b));
	return 0;
}

int min(int a,int b)
{
	/*in book*/
	/*a<b? return a:return b;
	this will give us an error so corrected version is below*/
	return a<b?a:b;
}