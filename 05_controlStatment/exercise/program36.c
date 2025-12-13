/*will this two program give same output answer is no different out for both program*/
#include<stdio.h>
int main(void){
	int i=1,j=3;
	while(i<5){
		i++;
		if(j==0)
			break;/*i= 1 2 3 4 5, j=3, 2, 1*/
		j--;
	}
	printf("%d %d\n",i,j);// 5,0
	i=1,j=3;
	while(i<5 && j!=0){
		i++;
		j--;
	}
	printf("%d %d\n",i,j);// 4,0

	return 0;
}