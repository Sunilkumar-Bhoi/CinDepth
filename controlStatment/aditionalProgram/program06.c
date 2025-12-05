/*Write a program to find out the Least Common Multiple and Highest Common Factor o f two numbers.*/

#include<stdio.h>

int main(void){
    int num1,num2,a,b;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    a=num1, b=num2;
    while(a!=b){
        if(a<b){
            a=a+num1;
        }
        else 
            b=b+num2;
    }
        printf("LCM = %d\n",a);
    a=num1,b=num2;
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    printf("HCF = %d\n",a);
    return 0;
}