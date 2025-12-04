/*P5:27 Program to undaratand use of break statment*/

#include<stdio.h>

int main(void){
    int n;

    for(n=0; n<5; n++){
        if(n==3)
            break;
        printf("Number %d\n",n);
    }
    printf("Out of the for loop\n");
    return 0;
}