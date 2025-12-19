/*rewite the function in exercise 31 to 35 using single return statment*/
#include<stdio.h>
int func(int n)
{
	if(n==39)
		n+=5;
	return n;
}
int main(void)
{
	printf("%d",func(39));
	return 0;
}
