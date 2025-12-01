#include<stdio.h>

int main(void){
    int a=5,b=5;
    printf("%d, %d\t",++a,b--);// 6 5
    printf("%d, %d\t",a,b);// 6 4
    printf("%d, %d\t",++a,b++);//7 4
    printf("%d, %d\n",a,b);//7 5
    return 0;
}