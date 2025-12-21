/*Write a function findJulian () that returns Julian day of a date. (See Program PS.41 )*/
#include <stdio.h>
int findJulian(int d, int m, int y);
int isleap(int y);
int main(void)
{
	int d, m, y;
	printf("Enter a valid date(dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d, &m, &y);
	printf("%d\n", findJulian(d, m, y));
	return 0;
}
int findJulian(int d, int m, int y)
{
	int total=d;
	switch(m-1){
		case 11 : total+=30;//fall thorugh
		case 10 : total+=31;//fall thorugh
		case 9 : total+=30;//fall thorugh
		case 8 : total+=31;//fall thorugh
		case 7 : total+=31;//fall thorugh
		case 6 : total+=30;//fall thorugh
		case 5 : total+=31;//fall thorugh
		case 4 : total+=30;//fall thorugh
		case 3 : total+=31;//fall thorugh
		case 2 : total+=28;//fall thorugh
		case 1 : total+=31;
	}
	if(m>2 && isleap(y))
		total+=1;
	return total;
}
int isleap(int y)
{
	return ((y % 400 == 0) || (y % 100 != 0 && y % 4 == 0));
}