/*p5.15 Progran to count digits in a number*/

#include<stdio.h>

int main(void){
    int num,count=0;
    printf("Enter a number : ");
    scanf("%d",&num);
    do{
        num/=10;
        count++;
    }while(num>0);
    printf("Number of digit = %d\n",count);
    return 0;
}