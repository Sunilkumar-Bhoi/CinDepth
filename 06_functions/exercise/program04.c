#include<stdio.h>
int add(int x,y,z)//error we cant define like this we have to specify type for each variable
{
	return z+y+z;
}
int main(void)
{
	int sum;
	sum=add(1,2,3);
	return 0;
}
