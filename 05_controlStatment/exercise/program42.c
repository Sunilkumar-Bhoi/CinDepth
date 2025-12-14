/*will thisw three loop give the same output*/
#include<stdio.h>
int main(void){
	int i=0;
	for(i=1;i<=5;i++){
		if(i==3)
			continue;
		printf("%d\n",i);
	}
	i=1;
	while(i<=5)
	{
		if(i==3)
			continue;/*this will skip the below increament and this will creare the infinity loop continue*/
		printf("%d\n",i);
		i++;
	}

	i=1;
	do
	{
		if(i==3)
			continue;/*continue skip the increment*/
		printf("%d\n",i);
		i++;
	} while (i<=5);
	/*no same output for all program*/
	return 0;
}