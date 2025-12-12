/*write the folowing loops without break statment*/
#include<stdio.h>
int main(void){
	/*
	for(i=1; ; i++){
		if(i>5)
			break;
		printf("%d ",i);
	}
	*/
	for(int i=1; i<=5; i++){
		printf("%d ",i);
	}
	printf("\n");
	/*
	i=1,j=3
	while(i<5){
		if(j==0)
			break;
		printf("%d ",i++,j--)
	}
	*/
	int i=1,j=3;
	while(i<5 && j>0){
		printf("%d ",i++,j--);/*warning and printf 1 2 3*/
	}
	printf("\n");
	return 0;
}