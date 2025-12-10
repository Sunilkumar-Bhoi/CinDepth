/*P6.10 Program to find out the factorial of a number*/

#include<stdio.h>

long int factorial(int n);/*function declaartion*/

int main(void){
    long int fact;
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num<0)
        printf("factorial of negative number is not posssible\n");
    else
        printf("factorial of %d is %ld\n",num,factorial(num));
    return 0;
}

long int factorial(int n){
    long int fact=1;
    if(n==0)
        return 1;
    for(int i=1; i<=n;i++){
        fact=fact*i;
    }
    return fact;
}