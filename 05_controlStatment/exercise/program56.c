/*write a program to find out the value of x raised to the power y, where x and y are positive integers.*/
#include<stdio.h>
int main(void){
	int x,y;
	long long mul=1;
	do
	{
		printf("Enter x and y (positive integer): ");
		scanf("%d%d",&x,&y);
	} while (x<=0 || y<=0);
	
		for(int i=1; i<=y; i++)
			mul=mul*x;

	printf("%d raised %d : %lld\n",x,y,mul);
	return 0;
}