/*Write a function cmpDate()to compare two dates,it should return 1 if Date1 is before Date2, -1 if Date 2 is before
Date1 and O if dates are same */
#include<stdio.h>
int cmpDate(int d1, int m1, int y1,int d2, int m2, int y2);
int main(void)
{
	int m1,m2,d1,d2,y1,y2;
	printf("Enter a valid date1(dd/mm/yyyy): ");
	scanf("%d/%d/%d",&d1,&m1,&y1);

	printf("Enter a valid date2(dd/mmm/yyyy): ");
	scanf("%d/%d/%d",&d2,&m2,&y2);

	printf("%d\n",cmpDate(d1,m1,y1,d2,m2,y2));
	return 0;
}
int cmpDate(int d1, int m1, int y1,int d2, int m2, int y2)
{
	if(y1>y2) return -1;
	if(y1<y2) return 1;
		
	if(m1>m2) return -1;
	if(m2>m1) return 1;
			
	if(d1>d2) return -1;
	if(d2>d1) return 1;
				
	return 0;
			
}
