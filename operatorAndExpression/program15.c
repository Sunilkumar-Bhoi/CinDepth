#include<stdio.h>

int main(void){
    int a=10,b=3,max;
    (a>b)?max=a:max=b; //error cant assign two time, ternary operator can asign ones alternative option max=a>b?a:b;
    printf("%d\n",max);
    return 0;
}