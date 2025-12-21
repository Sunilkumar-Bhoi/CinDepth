/*Write a function isLeap ( ) which inputs a ycar and returns 1 if the year is leap otherwise 0.*/
#include<stdio.h>
int isleap(int n);
int main(void)
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if(isleap(year))
		printf("Leap year\n");
	else 
		printf("Not leap year\n");
	return 0;
}

int isleap(int n)
{
	if( ((n%400==0)) || ((n%4==0 && n%100!=0)) )
		return 1;
	return 0;
}
