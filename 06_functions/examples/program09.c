/*6.9 Program that finds whether a number ia even; or ođd*/

#include<stdio.h>

void find(int n);/*function declaration*/

int main(void){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    find(num);
    return 0;
}
void find(int n){
    if(n%2==0)
        printf("Even\n");
    else
        printf("Odd\n");
}