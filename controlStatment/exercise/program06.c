#include<stdio.h>
int main(void){
	int i=1,j=9;
	if(i>=5 && j<5) //0 && 0 == 0 
		i=j+2;
	printf("%d\n",i);///i=1
	return 0;
}
