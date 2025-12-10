#include<stdio.h>
int main(void){
	int i=10;
	do{
		printf("i=%d\t",i);/*10,7,4,1,...*/
		i=i-3;
	}while(i);

	return 0;
}