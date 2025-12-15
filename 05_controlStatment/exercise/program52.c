/*Write a program to input a number and count the digits in it. Use while loop and the program should work conectly for
also.*/
#include<stdio.h>
int main(void){
	int num,count=0,rem;
	printf("Enter a number : ");
	scanf("%d",&num);
	if(num==0)
		printf("Digits : 1\n");
	else
	{
		while(num>0)
		{
			count++;
			num/=10;
		}
		printf("Digits : %d\n",count);
	}
	return 0;
}