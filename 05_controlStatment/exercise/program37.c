/*Rewrite these loops so that the initialization, test and update expressions are inside the parentheses of for loop statment*/
#include<stdio.h>
int main(void){
/*
	int i=1;
	for(;;)
	{
		if(i==5)
			break;
		printf("%d\n",i);
		i++;
	}
*/
	int i=1;
	for(i=1; i<=5; i++){
		printf("%d\n",i);
	}
/*
	sum=0;
	for(;;)
	{
	if(sum>100)
		break;
	scanf("%d",&n);
	sum+=n;
		}
*/
	int sum,n;
	for(sum=0;sum<=100;sum+=n){
		scanf("%d",&n);
	}
	printf("%d\n",sum);
	return 0;
}