/*i*/
#include<stdio.h>
int main(void){
	int a=5;
	begin:
	if(a)
	{
		printf("%d\n",a);
		a--;
		goto begin;
	}
	return 0;
}
/* ii
#include<stdio.h>
int main(void){
	int a=5;
	begin:
	if(a)
		printf("%d\n",a);
	a--;
	goto begin;//infinite loop
	return 0;
}
*/