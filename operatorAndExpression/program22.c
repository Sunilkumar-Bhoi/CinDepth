/*Write a program to accept any number and print the value of remainder after dividing it by 3*/
#include<stdio.h>

int main(void){
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("%d\n",num%3);

    return 0;
}