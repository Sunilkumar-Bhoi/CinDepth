/*Compare the output given by these two loops which were written to display numbers from 1 to 5 , but by mistake the
braces of the loop body are not included*/
#include<stdio.h>
int main(void){
/*1
	int i=0;
	while(i<=5)
		i++;
		printf("%d ",i); output : 6

	i=0;
	do
		i++;
		printf("%d ",i);	error it require while to complet the do statment
	
	while (i<=5);	treat as empthy while loop
*/	

/*correct version of both program*/
	int i=0;
	while(i<5){//removed = because when i=5 it willl print 6
		i++;
		printf("%d ",i);
	}

	i=0;
	do
	{
		i++;
		printf("%d ",i);
	} while (i<5);//removed = cause it prints 6 also
	
	return 0;
}