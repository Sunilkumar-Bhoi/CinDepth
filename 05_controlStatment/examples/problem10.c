/* Program to print the sum of digit of any nunber*/

#include<stdio.h>

int main(void){
    int num, sum=0;
    printf("Enter a number : ");
    scanf("%d",&num);

    while(num>0){
        int rem= num%10;
        sum=sum+rem;
        num=num/10;
    }
    printf("Sum of digit = %d\n",sum);
    return 0;
}