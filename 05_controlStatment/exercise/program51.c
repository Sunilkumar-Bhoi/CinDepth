/*write a program to display all four digit palindromes.
*/
#include<stdio.h>
int main(void){
	int i;
	for(i=1000; i<=9999; i++)
	{
		int temp=i,rev=0;
		while(temp>0)
		{
			rev=rev*10+temp%10;
			temp/=10;
		}
		if(i==rev)
			printf("%d\t",i);
	}
	return 0;
}
/*
another solution using formula "ABBA"
	for(int i=1; i<=9; i++)
	{
		for(j=0; j<=9; j++)
		{
			num=i*1000+j*100+j*10+i;
			printf("%d",num);
		}
	}
*/