/*P5.38 Program to get difference of two dates in years, months; days*/

#include<stdio.h>

int main(void){
    int d,m,y,d1,m1,y1,d2,m2,y2;
    printf("Enter date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d1,&m1,&y1);
    printf("Enter date(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &d2,&m2,&y2);
    if(d2<d1){
        if(m2==2){
            if(y2%100!=0 && y2%4==0 || y2%400==0)
                d2=m2+29;
            else 
                d2=m2+28;
        }
        else if(m2==5 || m2==7 || m2==10 || m2==12){
            d2=d2+30;
        }
        else{
            d2=d2+31;
        }
    }
    if(m2<m1){
        y=y2-1;
        m2=m2+2;
    }
    d=d2-d1;
    m=m2-m1;
    y=y2-y1;
    printf("%d day %d month %d year\n",d,m,y);
    return 0;
}
