#include<stdio.h>

int main(void){
    int a=2, b=2, x, y;
    x= 4 * ( ++a * 2 + 3); //36
    y= 4 * ( b++ * 2 + 3); //28
    printf("a=%d, b=%d, x=%d, y=%d\n",a,b,x,y);//3,3,36,28
    return 0;
}