#include<stdio.h>

int main(void){
    int a=9;
    char ch='A';
    a=a+ch+24;
    printf("%d\t%c\t%d\t%c\n",ch,ch,a,a);
    return 0;
}