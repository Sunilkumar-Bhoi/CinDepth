/*Write a program to multiply two numbers by Russian peasant method. Russian peasant method multiplies a n
two positive numbers using multiplication b y 2, division by 2 and addition. Here the first number is divided b
2 (integer division), and the second is multiplied by 2 repeatedly until the first number reduces to 1. Suppose w
have to multiply 1 9 by 25, we write the result of division and multiplication by 2 . in the two collims like this*/

#include<stdio.h>

int main(void){
    int num1,num2,sum=0;
    printf("Enter Multiplication(n x n): ");
    scanf("%dx%d",&num1,&num2);
    while(num1>=1){
        printf("%d\t%d\n",num1,num2);
        if(num1%2!=0){
            sum+=num2;
        }
        num1=num1/2;
        num2=num2*2;
    }
    printf("Sum = %d\n",sum);
    return 0;
}