/*Write a program that finds out the day of week from a given date. The formula for calculating the day is-
day = (y+ j+ f-h + th) % 7;
j = julian day of the date
y = year of given date(in 4 digits)
f = int part of (y-1)/4
h= int part of (y-1)/100
th = int part of (y-1)/400
The value of variable day tells us the day of week.
Value o f variable day
Name of day o f week
0 Saturday
1 Sunday
2 Monday
3 Tuesday 
4 Wednesday
5 Thursday
6 Friday
I n the above formula, julian day o f a date represents the day of year on which the date falls. Julian day of Ist
Jan is 1, of 2nd Feb is 33, of 31st Dec is 365(366 if leap year).
Now let's decide the structure of our program. Once we get the value of variable day, we can use switch t o
print the name of day of the week from the value of day.*/

#include<stdio.h>

int main(void){
    int d,m,y,day,f,h,th,j;
    printf("Enter date(dd/mm/yyyy): ");
    scanf("%d/%d/%d",&d,&m,&y);
    f=(y-1)/4;
    h=(y-1)/100;
    th=(y-1)/400;

    if(y%100!=0 && y%4==0 || y%400==0){
        switch(m){
            case 1:
                j=d;
                break;
            case 2:
                j=d+31;
                break;
            case 3:
                j=d+60;
                break;
            case 4:
                j=d+91;
                break;
            case 5:
                j=d+121;
                break;
            case 6:
                j=d+152;
                break;
            case 7:
                j=d+182;
                break;
            case 8:
                j=d+213;
                break;
            case 9:
                j=d+244;
                break;
            case 10:
                j=d+274;
                break;
            case 11:
                j=d+305;
                break;
            case 12:
                j=d+335;
                break;
        }
        day=(y+j+f-h+th)%7;
    }
    else{
                switch(m){
            case 1:
                j=d;
                break;
            case 2:
                j=d+31;
                break;
            case 3:
                j=d+59;
                break;
            case 4:
                j=d+90;
                break;
            case 5:
                j=d+120;
                break;
            case 6:
                j=d+151;
                break;
            case 7:
                j=d+181;
                break;
            case 8:
                j=d+212;
                break;
            case 9:
                j=d+243;
                break;
            case 10:
                j=d+273;
                break;
            case 11:
                j=d+304;
                break;
            case 12:
                j=d+334;
                break;
        }
        day=(y+j+f-h+th)%7;
    }

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
            printf("Tueday\n");
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
    return 0;
}