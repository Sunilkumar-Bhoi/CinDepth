/*Write a program to enter a number and find the reverse of that number. Also display the double of the reverse number.*/
#include<stdio.h>
int main(void){
	int num,rev=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rev=rev*10+num%10;
		num/=10;
	}
	printf("Reverse : %d, Double : %d\n",rev,rev*2);
	return 0;
}