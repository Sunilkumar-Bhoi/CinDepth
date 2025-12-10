#include<stdio.h>
int main(void){
	int i;
	
	for(i=0;i<10;i++)
		printf("%d ",i); /*print 0 to 9 digit*/

	printf("\n");

	for(i=1;i<=10;i++)
		printf("%d ",i);/*display 1 to 10 number*/
	
	printf("\n");
	
	for(i=1;i<10;i++)
		printf("%d ",i);/*dispaly 1 to 9 digit*/

	printf("\n");

/*	
	for(i=0;i<=10;i--)
		printf("%d ",i);display infinity loop
*/
	for(i=10;i>1;i--)
		printf("%d ",i);/*display 10 to 2*/

	printf("\n");

	for(i=10;i>0;i--)
		printf("%d ",i);/*display 10 to 1*/

	printf("\n");

	for(i=10;i>=0;i--)
		printf("%d ",i);/*display 10 to 0 number*/

	printf("\n");

	for(i=0;i>10;i++)
		printf("%d",i);/*no execution*/

	printf("\n");

/*	for(i=1;i!=10;i=i+2)
		printf("%d ",i);infinity loop*/

	for(int j=10;i=j;j-=2)
		printf("%d ",i);/*error due to assignment operator secund condition is for the condition check so it should be ==*/
		return 0;
}