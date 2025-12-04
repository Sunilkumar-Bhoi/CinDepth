/*p5.IB program to print numbers in reverse order with a difference of 2*/

#include<stdio.h>

int main(void){
    for(int i=10; i>=1; i=i-2){
        printf("%d\t",i);
    }
    printf("\n");
    return 0;
}