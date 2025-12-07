#include<stdio.h>
int main(void){
	int i, total=0;
	for(i=1;i<=10;i++){
		switch(i){
			case 1:
			case 4:
			case 5:
			case 7:
				total+=i;
				break;
			default:
				continue;
		}
		printf("%d ",i);//1,4,5,7
	}
	printf("Total=%d\n",total);//17
	return 0;
}