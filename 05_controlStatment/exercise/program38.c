/*write this code using a for loop*/
#include<stdio.h>
int main(void){
/*
	int i=0,j=10,k=6;
	while(1){
		if(i==j || k<0)
			break;
		printf("%d %d %d\n",i,j,k);
		i++;
		j--;
		k=k-2;
	}
*/
	
	int i,j,k,n;
	for(i=0,j=10,k=6;i<j,k>=0;i++,j--,k-=2){
		printf("%d %d %d\n",i,j,k);
	}

	return 0;
}