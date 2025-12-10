#include<stdio.h>
int main(void){
	int i,sum;
	for(i=0;i<10;i+=3)
		sum+=i*i;/*sum=sum+i*i*/
	printf("%d\n",sum);/*garabage due to first value of sum, here garbage value is obtain 1 so answer 127 come */
	return 0;
}