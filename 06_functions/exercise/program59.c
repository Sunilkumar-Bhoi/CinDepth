/*Write a function printDayOfWeek () to print day of the week for a given date(See Program P5.41). Use functions
isValid(), isleap(), and findJulian ( ) from previous exercises*/
#include<stdio.h>
int isleap(int y);
int findJulian(int d, int m, int y);
int isvalid(int d, int m, int y);
void printDayOfWeek(int day);
int main(void)
{
	int d,m,y,day,f,h,th,j;
    do
	{
		printf("Enter date(dd/mm/yyyy): ");
  		scanf("%d/%d/%d",&d,&m,&y);
	} while (!(isvalid(d,m,y)));
	
	
    f=(y-1)/4;
    h=(y-1)/100;
    th=(y-1)/400;
	j=findJulian(d,m,y);
	day=(y+j+f-h+th)%7;
	printDayOfWeek(day);
	return 0;
}
int isvalid(int d, int m, int y)
{
	int max_days;

	if(y<1 || m<1 || m>12)
		return 0;
	if(m==2)
		max_days=isleap(y)?29:28;
	else if(m==4 || m==9 || m==6 || m==11)
		max_days=30;
	else 
		max_days=31;
	if(d<1 || d>max_days)
		return 0;
	return 1;
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
void printDayOfWeek(int day)
{
	switch(day){
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
        default :
            printf("Error in day variable calculation\n");
    }
}