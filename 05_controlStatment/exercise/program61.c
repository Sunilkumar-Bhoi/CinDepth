/*writw a program to print the following
*******
*******
*******
*******
*******
*******
*******

*******
*     *
*     *
*     *
*     *
*     *
*******

// \*****/
// *\***/*
// **\*/**
// ***\***
// **/*\**
// */***\*
// /*****\
 */
#include<stdio.h>
int main(void){
	int i,j;
	printf("1st Pattern: \n");
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("2nd Pattern : \n");
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(i==1 || i==7)
				printf("*");
			else
				if(j==1 || j==7)
					printf("*");
				else 
					printf(" ");
		}
		printf("\n");
	}
	printf("3rd pattern: \n");
	for(i=1; i<=7; i++)
	{
		for(j=1; j<=7; j++)
		{
			if(i==j)
			{
			 printf("\\");
			}
			else
			{
				if(i==1 && j==7 || i==2 && j==6 || i==3 && j==5 || i==5 && j==3 || i==6 && j==2 || i==7 && j==1)
					printf("/");
				else
					printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}