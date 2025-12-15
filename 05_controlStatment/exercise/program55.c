/*Write a program to accept any number n and print the cube of all numbers from 1 to n which are divisible by 3. Rewrite
the program using a continue statement.*/
#include<stdio.h>
int main(void){
	int num,i;
	printf("Enter a number :");
	scanf("%d",&num);
	/*using if statment*/
	for(i=1; i<=num; i++)
	{
		if(i%3==0)
			printf("%d\n",i*i*i);
	}
	/*using continue statment*/
	printf("Using the continue statment\n");
	for(i=1;i<=num;i++)
	{
		if(i%3!=0)
			continue;
		printf("%d\n",i*i*i);	
	}
	return 0;
}