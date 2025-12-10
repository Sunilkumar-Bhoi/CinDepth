#include<stdio.h>
int main(void){
	int i=1;
	for(;;)
		if(i++==3)
			break;/*break is in not loop , erro*/
printf("%d ",i);
i=1;
while()/*expected expression in it*/
	if(i++==3)
		break;/*break is in not loop,error*/
printf("%d ",i);
	return 0;
}