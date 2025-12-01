#include<stdio.h>

int main(void){
    int a=15, b=13, c=16,x,y;
    x = a-3%2+c*2/4*2+b/4;//25-3%2+32/8+23/4, 25-3%2+4+5, 25-1+4+7, 33
    y = a = b +5-b+9/3;//13+5-13+3, 18-13+3, 8
    printf("x=%d, y=%d\n",x,y);
    return 0;
}