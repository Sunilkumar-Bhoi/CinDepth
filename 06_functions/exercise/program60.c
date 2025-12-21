/*Write a function to find difference of two dates. (See Program P5.38). Use functions isValid(), isLeap(), and
findJulian!), cmpDate () from previous exercises*/
#include<stdio.h>
int isleap(int y);
int cmpDate(int d1, int m1, int y1,int d2, int m2, int y2);
int findJulian(int d, int m, int y);
int isvalid(int d, int m, int y);
void printDayOfWeek(int day);
long diff(int d1, int m1, int y1,int d2, int m2, int y2);
int main(void)
{
	int d1,d2,m1,m2,y1,y2,day,f,h,th,j;
    do
	{
		printf("Enter date 1(dd/mm/yyyy): ");
  		scanf("%d/%d/%d",&d1,&m1,&y1);
	} while (!(isvalid(d1,m1,y1)));
	    do
	{
		printf("Enter date 2(dd/mm/yyyy): ");
  		scanf("%d/%d/%d",&d2,&m2,&y2);
	} while (!(isvalid(d2,m2,y2)));
	
	printf("differance in days: %ld",diff(d1,m1,y1,d2,m2,y2));
	return 0;
}
long diff(int d1, int m1, int y1,int d2, int m2, int y2)
{
	int order = cmpDate(d1, m1, y1, d2, m2, y2);
    
    // If Date 2 is earlier, swap them so d1/m1/y1 is always the earlier date
    if (order == -1) {
        int td = d1; d1 = d2; d2 = td;
        int tm = m1; m1 = m2; m2 = tm;
        int ty = y1; y1 = y2; y2 = ty;
    } else if (order == 0) {
        return 0; // Dates are the same
    }

    long totalDays = 0;

    if (y1 == y2) {
        // Simple case: same year
        totalDays = findJulian(d2, m2, y2) - findJulian(d1, m1, y1);
    } else {
        // 1. Days left in the first year
        totalDays = (isleap(y1) ? 366 : 365) - findJulian(d1, m1, y1);

        // 2. Days in the years between
        for (int y = y1 + 1; y < y2; y++) {
            totalDays += (isleap(y) ? 366 : 365);
        }

        // 3. Days passed in the final year
        totalDays += findJulian(d2, m2, y2);
    }

    return totalDays;
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