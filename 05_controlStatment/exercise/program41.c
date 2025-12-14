/*will this three loops gives same output*/
#include<stdio.h>
int main(void){
	int i;
	for(i=1;i<=5;i++)
		printf("%d ",i);
	/*output : 1 2 3 4 5*/
	i=1;
	while(i<=5){
		printf("%d ",i);
		i++;
	}
	/*output : 1 2 3 4 5*/
	i=1;
	do
	{
		printf("%d ",i);
		i++;
	} while (i<=5);
	/*output : 1 2 3 4 5*/
	return 0;
}