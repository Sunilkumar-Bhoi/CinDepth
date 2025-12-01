#include<stdio.h>

int main(void){
    int a=4, b=8, c=3, d=9,z;
    z = a++ + ++b * c-- - --d;//4+9*3-8, 4+27-8, 31-8, 23
    printf("a=%d, b=%d, c=%d, d=%d, z=%d\n",a,b,c,d,z);//5 9 2 8 
    return 0;
}