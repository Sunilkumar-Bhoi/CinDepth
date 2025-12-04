/* Progran to find the sum of digit util sum is reduced to 1 digit*/

#include<stdio.h>

int main(void){
    int n,sum,rem;
    printf("Enter a number : ");
    scanf("%d",&n);
    do{
        sum=0;
        while(n>0){
            rem=n%10;
            sum+=rem;
            n/=10;
        }
        n=sum;
        printf("%d\n",sum);
    }while(sum>9);
    
    return 0;
}