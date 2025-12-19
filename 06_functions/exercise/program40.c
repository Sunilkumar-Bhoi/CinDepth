/*write a function that input a number and prints the multiplication table of that number*/
#include<stdio.h>
void table(void);
int main(void)
{
	table();
	return 0;
}

void table(void)
{
	int num,i;
	printf("Enter a number: ");
	scanf("%d",&num);
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d\n",num,i,num*i);
	}
}