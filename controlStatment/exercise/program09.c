/*
9. Write this statement using an if -else
x+= a‹b ? (-x) : 100;
*/

#include<stdio.h>

int main(void){
	int a=10,b=20,x=1;
	if(a<b)
		x+=-x;
	else
		x+=100;
	printf("%d\n",x);
	return 0;
}
