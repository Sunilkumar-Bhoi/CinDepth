#include<stdio.h>

int main(void){
    int a,b,c,d;
    a=b=c=d=4;
    a*=b+1;//a=a*(b+1)=4*5=20
    c+=d*=3;// c=4+d=4*3=16
    printf("a=%d\tc=%d\n",a,c);//20,16
    return 0;
}