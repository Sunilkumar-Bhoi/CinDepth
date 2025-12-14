/*write a program to enter 10 number ranging 1 to 50, and show historogram by displaying
"="sign for number entered. For example if the number entered is 12 then a line of 12 equal to signs should be displayed.*/
#include<stdio.h>
int main(void){
	int num,i;
	for(i=1; i<=10; i++)
	{
		do
		{
		printf("Enter Number(1-50) : ");
		scanf("%d",&num);
		} while (num>50);
		for(int j=1; j<=num; j++)
		{
			printf("=");
		}
		printf("\n");
	}
	return 0;
}