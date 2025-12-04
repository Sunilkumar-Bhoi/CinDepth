/*program to print Armstrong numhers*/

#include<stdio.h>

int main(void){
    int n,i,rem,cube=0;
    printf("Armstrong number are :\n");
    for(i=100; i<=999; i++){
        n=i;
        int sum=0;
        while(n>0){
            rem=n%10;
            cube=rem*rem*rem;
            sum+=cube;
            n/=10;
        }
        if(i==sum){
            printf("%d\n",i);
        }
    }
    return 0;
}