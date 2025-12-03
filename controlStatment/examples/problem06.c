/* Program to find whether a year is loap or not*/

#include<stdio.h>

int main(void){
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);

    if(year % 100 != 0){
        if(year%4==0){
            printf("leap year\n");
        }
        else{
            printf("not a leap year\n");
        }
    }
    else{
        if(year % 400 == 0){
            printf("leap year\n");
        }
        else{
            printf("not a leap year\n");
        }
    }
    return 0;
}