/*Write a currency program, that tells. you how many 100, 50, 20, 10, 5 , 2 and 1 R s notes will b e necded for a
given amount of money. For example i f the total amount is Rs 545 then five 100 Rs notes, two 20 Rs note and
one 5 R s note will b e needed.*/

#include<stdio.h>

int main(void){
    int cash,exch;
    printf("Enter Ammount: ");
    scanf("%d",&cash);

    exch=cash/100;
    printf("100= %d\t",exch);
    cash=cash%100;
    
    exch=cash/50;
    printf("50= %d\t",exch);
    cash=cash%50;
  
    exch=cash/20;
    printf("20= %d\t",exch);
    cash=cash%20;
    
    exch=cash/10;
    printf("10=%d\t",exch);
    cash=cash%10;
  
    exch=cash/5;
    printf("5= %d\t",exch);
    cash=cash%5;
    
    exch=cash/2;
    printf("2= %d\t",exch);
    cash=cash%2;
  
    exch=cash/1;
    printf("1= %d\n",exch);

    return 0;
}/*alternative can solv using fall through switch case, give choice to start from which coin*/