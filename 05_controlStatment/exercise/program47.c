/*write a program to input 10 number and find the largest number */
#include<stdio.h>
int main(void){
	int i,num,temp=0;
	for(i=1; i<=10; i++)
	{
		printf("Enter number %d :",i);
		scanf("%d",&num);
		if(num>temp)
			temp=num;
	}
	printf("Largest number is : %d\n",temp);
	return 0;
}