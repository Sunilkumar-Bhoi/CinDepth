#include<stdio.h>
int main(void){
	int i,j;
	for(j=i+1,i=1;i<=5;j++,i++)/*j got garabage value of i*/
		printf("%d\t %d\n",i,j);

	return 0;
}