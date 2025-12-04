/*s. 3 1 Progzam to find whether a number is even or odd*/

#include<stdio.h>

int main(void){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n%2==0)
        goto even;
    else
        goto odd;
    even:
        printf("Even number\n");
        goto end;
    odd: 
        printf("Odd number\n");
        goto end;
    end:;
    return 0;
}