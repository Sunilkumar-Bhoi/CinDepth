#include<stdio.h>
int main(void){
	int a=6,b=4;
	while(a+b){
		printf("a=%d, b=%d\n",a,b);/*6,4 3 0, 1 0*/
		a/=2;
		b%=2;
	}
	return 0;
}