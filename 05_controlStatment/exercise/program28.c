#include<stdio.h>
int main(void){
	int i,j,x=0;
	for(i=0;i<5;i++)
		for(j=1;j>0;j--)
			x=i+j+1;/*4+1+1=6*/
	printf("x=%d\n",x);/*6*/
	return 0;
}