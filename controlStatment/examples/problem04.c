/* Program to find guotient and remainder*/

#include<stdio.h>

int main(void){
    int x,y,rem,quo;
    printf("Enter two number: ");
    scanf("%d%d",&x,&y);

    if(y){//y is not zero than
        quo=x/y;
        rem=x%y;
        printf("Quotient= %d and Reminder = %d\n",quo,rem);
    }
    else{
        printf("Divide by zero error\n");
    }
    return 0;
}