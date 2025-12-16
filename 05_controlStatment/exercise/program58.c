/*Find the sum of these series up t o n terms where x is an integer entered b y the user.
(i) 1 + 11 + 111 + 1111+.....
(ii)x+x^2+x^3+x^4+.....
(tii) x-x^2+x^3-x^4+...*/
#include<stdio.h>
int main(void){
	int num,x;
	printf("Enter a number of terms : ");
	scanf("%d",&num);
	printf("Enter the value of x : ");
	scanf("%d",&x);
	long int a=1,j=1;
	long long int sum=0;
	for(int i=1;i<=num;i++)
	{
		sum+=a;
		j=j*10;
		a+=j;
	}
		printf("series 1+11+111+... : %lld\n",sum);
	sum=0;
	j=x;
	for(int i=1; i<=num; i++)
	{
		sum+=x;
		x=j*x;
	}
		printf("series x+x^2+x3... : %lld\n",sum);

	sum=0;
	x=j;
	for(int i=1; i<=num; i++)
	{
		if(i%2==0)
			sum-=x;
		else 
			sum+=x;

		x=j*x;
	}
		printf("series x-x^2+x^3... : %lld\n",sum);
	
	return 0;
}
