#include<stdio.h>

int main(void){
    int a=3, b=4, c=3, d=4, x, y;
    x = (a=5) && (b=7); //a=5, b=7 , x=1
    y = (c=5) || (d=8); //c=5, d=4, y=1  here secund condition will not checked because in logical or 1,0 and 1,1 both is going to give same answer 1
    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n",a,b,c,d,x,y);
    x = (a==6) && (b=9); //a=5,b=7, x=0 here first condition is false and in logical and 0,1 0,0 bith give output 0
    y = (c==6) || (d=10);//c=5, d=10, y=1
    printf("a=%d, b=%d, c=%d, d=%d, x=%d, y=%d\n",a,b,c,d,x,y);
    return 0;
}