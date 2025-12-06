#include<stdio.h>
int main(void){
	int a=0,b=0;
	if(!a){		//condition true
		b=!a;//b=1
		if(b)
			a=!b;//a=0
	}
	printf("%d,	%d\n",a,b);//0 1
	return 0;
}