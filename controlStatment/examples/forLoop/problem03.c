/*Multiply two positive numbers without using * operator*/

#include<stdio.h>

int main(void){
    int a, b, sum=0;
    printf("Enter two number : ");
    scanf("%d%d",&a,&b);

    for(int i=0; i<b; i++){
        sum+=a;
    }
    printf("%d * %d = %d\n",a,b,sum);
    return 0;
}