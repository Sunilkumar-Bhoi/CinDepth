/*Write a program to accept a number in decimal and print the number in octal and hexadecima*/
#include<stdio.h>

int main(void){
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("octal=%o\thexadecimal=%x\n",num,num);

    return 0;
}