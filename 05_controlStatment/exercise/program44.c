/*write this loop without using continue
i) for (i=1; i<6; i++)
{
if (i==3)
	continue;
printf("%d ",i);
}
continue:

ii)
	x=0, sum=0;
	while(x<10)){
		x++;
		if(x%2==0)
			continue;
		sum+=x;
	}
*/

#include<stdio.h>
int main(void){
	for(int i=1; i<=5; i++)
	{
		if(i!=3)
			printf("%d ",i);
	}

	printf("\n");
	int x=0,sum=0;

	while(x<10)
	{
		x++;
		if(x%2!=0)
			sum+=x;
	}
	printf("%d\n",sum);
	return 0;
}