#include<stdio.h>

int main(void){
    int a=5, b=6;
    printf("%d\t",a=b);//6
    printf("%d\n",a==b);//1
    return 0;
}