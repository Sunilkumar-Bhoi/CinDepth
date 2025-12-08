/*5.22 Program to print the sum of digits of any number using for 100p*/

#include<stdio.h>

int main(void){
    int num,sum=0,rem;
    printf("Enter number : ");
    scanf("%d",&num);
    for(; num>0; num/=10){
        rem=num%10;
        sum+=rem;
    }
    printf("Sum = %d\n",sum);
}