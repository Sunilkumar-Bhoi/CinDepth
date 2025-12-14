/*Write a function isprime ( ) which takes a number and returns 1 if the number is prime and 0 otherwise*/
#include<stdio.h>
#include<math.h>

int isprime(int num);

int main(void){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(isprime(num))
        printf("Number is prime\n");
    else
        printf("number is not prime\n");
    return 0;
}

int isprime(int num){
    int flag=0;
    for(int i=2;i<sqrt(num);i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}