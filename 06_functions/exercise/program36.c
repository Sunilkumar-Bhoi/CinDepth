/*reweite the function in exercise 36 37 38 39 without using else*/
#include<stdio.h>
int reverse(int num)
{
	int rev=0;
	while(num>0)
	{
		rev=rev*10+num%10;
		num/=10;
	}
	return rev;
}
int ispallindrom(int num)
{
	if(num==reverse(num))
		return 1;
	return 0;
}

int main(void)
{
	int n=121;
	printf("%d",ispallindrom(n));
	return 0;
}