/*Find the sum of these series up t o n terms where x is an integer entered b y the user.
(i) 1 + 11 + 111 + 1111+.....
(ii)x+*+x+x+
(tii) x-x°+x-x*+*/
#include<stdio.h>
int main(void){
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int a=1,j=10;
	long long int sum=0;
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",a);
		a=a+j;
		sum+=a;
		j=j*10;
	}
		printf("%lld\n",sum);

	return 0;
}
