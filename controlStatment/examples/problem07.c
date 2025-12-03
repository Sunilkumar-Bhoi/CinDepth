/*WtPS.7 Program to find out the grade of a student when the marks of 4 gubiectg are given.
The method of assigning grade is.
percentages-85
percentagec85" and percentages:70
percentagec70 and percentage>=55
percentage<55
and percentage»-40
perc*/

#include<stdio.h>

int main(void){
    int m1,m2,m3,m4,total,per;
    char grade;
    printf("Enter 4 subject marks : ");
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);

    total=m1+m2+m3+m4;

    per=total/4;

    if(per>=85)
        grade='A';
    else if(per>=70)
        grade='B';
    else if(per>=55)
        grade='C';
    else if(per>=40)   
        grade='D';
    else
        grade='E';

    printf("percentage = %d\t grade =%c\n",per,grade);

    return 0;
}