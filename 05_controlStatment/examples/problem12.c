/*P5.12 Program to find the factorial of any number*/

#include<stdio.h>

int main(void){
    int num;
    long fact=1;
    printf("Enter a numner: ");
    scanf("%d",&num);

    if(num>=0){
        while(num>0){
          fact=fact*num;
          num--;
        }
    }
    else
        printf("no factorial of negative number\n");

    printf("Factorial = %ld\n",fact);
    
    return 0;
}