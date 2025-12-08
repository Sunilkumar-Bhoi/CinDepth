/*P5.30 Program to find the sum and average of 10 positive intagers*/
#include<stdio.h>

int main(void){
    int i=1,n,sum=0;
    float avg;

    while(i<=10){
        printf("Enter number : ");
        scanf("%d",&n);
        if(n<0){
            printf("Enter only positive number\n");
            continue;
        }
        sum+=n;
        i++;
    }
    avg=sum/10;
    printf("Avg of 10 number = %.2f\n",avg);
    return 0;
}