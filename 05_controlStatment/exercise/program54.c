/*Write a program to accept any number n and print the sum of square of all numbers from 1 to n.*/
#include<stdio.h>
int main(void){
	int num,i,sum=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		sum+=i*i;
	}
	printf("Sum : %d\n",sum);
	return 0;
}