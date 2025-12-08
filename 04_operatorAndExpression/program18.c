#include<stdio.h>

int main(void){
    int a=10;
    a= a++ * a--; //10*11=110   
    printf("%d\n",a);//100
    printf("%d\n",a++ * a++); //121
    return 0;
}