/*Write a program to enter a number and test whether it is a fibonacci number or not.*/
#include<stdio.h>
int main(void){
	int num,a=0,b=1,next;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==0 || num==1)
	{
		printf("fibonacci number\n");
		return 0;
	}
	while(b<num)
	{
		next=a+b;
		a=b;
		b=next;
	}
	if(b==num)
		printf("Fibonacci number\n");
	else
		printf("not fibonacci number\n");

	return 0;
}