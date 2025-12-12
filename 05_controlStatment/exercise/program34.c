/*what is he output of the following*/
#include<stdio.h>

int main(void){
	int i;
	for(i=1; i<=5; i++){
		printf("*");
	}
	/* expected output: ***** correct */
	printf("\n");
	int j;
	for(j=1; j<=5; j++)
		for(i=1;i<=6;i++)
			printf("*");/*6*5 * print*/
	printf("\n");/*not execute as in loop exutes separately*/

	for(j=1;j<=5;j++){
		for(i=1;i<=6;i++)
			printf("*");
		printf("\n");
	}
	/* expected output
	*******
	*******
	*******
	*******
	*******
	*/
	printf("\n");
	int k;
	for(k=1;k<=3;k++){
		for(j=1;j<=5;j++){
			for(i=1;i<=6;i++)
				printf("*");
			printf("\n");
		}
		printf("\n");
	}
	/*
	******
	******
	******
	******
	******
	******

	******
	******
	******
	******
	******
	******
....
	
	
	*/
	return 0;
}