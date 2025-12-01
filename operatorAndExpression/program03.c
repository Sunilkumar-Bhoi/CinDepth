#include<stdio.h>

int main(void){
    int a=9, b=15, c=16, d=12, e, f;
    e = !(a<b || b<c); //e=0
    f = (a>b)? a-b: a+b; //f=24
    printf("e=%d, f=%d\n",e,f);
    return 0;
}