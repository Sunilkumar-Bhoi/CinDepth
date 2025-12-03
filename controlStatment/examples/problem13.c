/* Program to convert a binary number to a decimal nurber*/

#include<stdio.h>

int main(void){
    int bin,dec=0,rem,j=1;
    printf("Enter a binary number : ");
    scanf("%d",&bin);

    while(bin>0){
        rem=bin%10;
        dec=dec+j*rem;
        j*=2;
        bin/=10;
    }

    printf("Decimal = %d\n",dec);
    return 0;
}