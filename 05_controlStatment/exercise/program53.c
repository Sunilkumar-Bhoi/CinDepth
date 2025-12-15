/*input number and digit and count the number of digit of times digit occurs in the number*/
#include<stdio.h>
int main(void){
	int num,dig,count=0,temp;
	printf("Enter number : ");
	scanf("%d",&num);
	temp=num;
	printf("Enter digit to count : ");
	scanf("%d",&dig);
	while (num>0)
	{
		if(num%10==dig)
			count++;
		num/=10;
	}
	printf("%d occurs %d times in %d\n",dig,count,temp);

	return 0;
}