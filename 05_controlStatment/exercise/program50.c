/*Write a program to find whether a number is palindrome or not.*/
#include<stdio.h>
int main(void){
	int num,rev=0,temp;
	printf("Enter a number: ");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rev=rev*10+num%10;
		num/=10;
	}
	if(temp==rev)
		printf("Pallindrom\n");
	else	
		printf("Not Pallindrom\n");
	return 0;
}