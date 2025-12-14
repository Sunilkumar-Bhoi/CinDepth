/* Write a program to print numbers from 1 to 80 separeted by tab, 8 numbers per line.*/
#include<stdio.h>
int main(void){
	int i,j,k=1;
	for(i=1; i<=10; i++)
	{
		for(j=1; j<=8; j++)
		{
			printf("%d\t",k);
			k++;
		}
		printf("\n");
	}
	return 0;
}