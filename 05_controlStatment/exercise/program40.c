/*rewite this program using do while loop */
#include<stdio.h>

int main(void){
	/*
	int 1,b, h , sarea, vol;
	printf ("Enter length, width, heighr of a cuniod: "):
	scanf("%d%d%d",&l,&b,&h);
	while(l<=c || b<=0 |; h<=0)
	printf ("Enter length, width, heighr of a cuniod: "):
	scanf("%d%d%d",&l,&b,&h);
	}
	sarea=2* (1*b + b*h + n*1);
	vol=1*p*h;
	printfi "Surface Area=zd, Volume=id\n", sarca, vol);
	return 0;
	*/
	int l,b,h,sarea,vol;
	do{
		printf("Enter length, width, height of a cuboid :");/*we wont write two times because do while loop run for a single time even if condion is false*/
		scanf("%d%d%d",&l,&b,&h);
	} while (l<=0 || b<=0 || h<=0);
	sarea=2*(l*b + b*h + h*l);
	vol=l*b*h;
	printf("Surface area=%d, Volume=%d\n",sarea,vol);
	return 0;
}