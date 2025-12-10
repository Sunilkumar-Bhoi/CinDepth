#include<stdio.h>
int main(void){
	int i=1;
	while(i++<5)
		printf("%d ",i);/*display 2 to 5*/
	printf("\n");
	i=1;
	while(++i<5)
		printf("%d ",i);/*display 2 to 4*/
	printf("\n");
	i=6;
	while(i--)
		printf("%d ",i);/*display 5,4,3,2,1,0*/

	return 0;
}