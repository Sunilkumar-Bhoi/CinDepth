/*Write a function isValid ( ) to find whether a date is valid. (See Program P5.37*/
#include<stdio.h>
int isvalid(int d, int m, int y);
int isleap(int y);
int main(void)
{
	int d,m,y;
	printf("Enter date(dd/mm/yy):");
	scanf("%d/%d/%d",&d,&m,&y);

	if(isvalid(d,m,y))
		printf("Valid Date\n");
	else 
		printf("Invalid Date\n");
	return 0;
}
int isvalid(int d, int m, int y)
{
	int max_days;

	if(y<1 || m<1 || m>12)
		return 0;
	if(m==2)
		max_days=isleap(y)?29:28;
	else if(m==4 || m==9 || m==6 || m==11)
		max_days=30;
	else 
		max_days=31;
	if(d<1 || d>max_days)
		return 0;
	return 1;
}
int isleap(int y)
{
	return (y%400==0 || (y%100!=0) && (y%4==0));
}