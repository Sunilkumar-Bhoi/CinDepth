/*write a function cubesum() that accept an integer and return the sum of cube of individual digit of that  number. use this function to make function a PrintArmstrong() and is isArmstrong() to print and find weather a number is an armstrong number.see P5.25*/
#include<stdio.h>
int cubesum(int num);
void PrintArmstrong(int n);
int isArmstrong(int n);
int main(void)
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	PrintArmstrong(num);
	return 0;
}
int cubesum(int num)
{
	int sum=0,cube,digit;
	do
	{
		digit=num%10;
		cube=digit*digit*digit;
		sum+=cube;
		num/=10;
	} while (num>0);
	return sum;
}
void PrintArmstrong(int n)
{
	if(isArmstrong(n))
		printf("Armstrong number\n");
	else
		printf("Not a armstrong number\n");
}
int isArmstrong(int n)
{
	if(n==cubesum(n))
		return 1;
	return 0;	
}