/*Write a program that accepts marks in five subjects and calculates the total percentage marks.*/
#include<stdio.h>

int main(void){
    int sub1,sub2,sub3,sub4,sub5;
    float per,total;

    printf("Enter Subject 1 marks: ");
    scanf("%d",&sub1);
    printf("Enter Subject 2 marks: ");
    scanf("%d",&sub2);
    printf("Enter Subject 3 marks: ");
    scanf("%d",&sub3);
    printf("Enter Subject 4 marks: ");
    scanf("%d",&sub4);
    printf("Enter Subject 5 marks: ");
    scanf("%d",&sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    per=(total/5);

    printf("percentage : %.2f\n",per);

    return 0;
}