#include<stdio.h>
int main(void){
	//10 20 30 ....70
	for(int i=10;i<=70;i+=10){
		printf("%d ",i);
	}
	printf("\n");
	//-10 -20.....-70
	for(int i=(-10);i>=(-70);i-=10){
		printf("%d ",i);
	}
	printf("\n");
	for(int i=1;i<=5;i++){
		for(int j=1;j<=i;j++)
			printf("1");
		printf(" ");
	}
	printf("\n");

	for(int i=10;i>=(-5);i-=3){
		printf("%d ",i);
	}
	printf("\n");
	int term=1;
	for(int i=1; i<=6;i++){
		printf("%d ",term);
		term=term*2;
	}
	printf("\n");
	return 0;
}