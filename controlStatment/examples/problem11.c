/* Program to print the sum of digit of any nunber*/

#include<stdio.h>

int main(void){
    int num, prod=1;
    printf("Enter a number : ");
    scanf("%d",&num);
    if(num>0){
        while(num>0){
            int rem= num%10;
            prod=prod*rem;
            num=num/10;
         }
    printf("Product of digit = %d\n",prod);
    }   
    else
        printf("Product of digit = 0\n");
    return 0;
}