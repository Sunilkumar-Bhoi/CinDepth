/*print prime number between 1 to 99*/
#include<stdio.h>
#include<math.h>

int main(void){
	int i,j;
	for(i=2; i<=99; i++)
	{
		int flag=1;
		for(j=2;j<=sqrt(i); j++)
		{
			if(i%j==0)
				flag=0;
		}
		if(flag)
			printf("%d\n",i);
	}
	return 0;
}