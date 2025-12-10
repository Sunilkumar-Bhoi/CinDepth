#include<stdio.h>
int main(void){
	int i;
	for(i=1;i<5;i++)
		printf("%d ",i);/*display 1 to 4*/
	i=10;
	while(i<5);
		printf("%d ",i++);/*display 10 and increment i=11*/
	i=0;
	while(i<5);//semicallen in next line else show warnings
		printf("%d\n",i++);/*display 0 and increment i=1*/
		return 0;
}