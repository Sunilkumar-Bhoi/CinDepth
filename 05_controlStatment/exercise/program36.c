#include<stdio.h>
int main(void){
	int i=1,j=3;
	while(i<5){
		i++;
		if(j==0)
			break;/*i= 2 3 4 5, j=3, 2, 1*/
		j--;
	}
	printf("%d %d\n",i,j);// 5,0
	return 0;
}