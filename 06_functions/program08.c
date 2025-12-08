#include<stdio.h>
int sum(int x, int y){/*no declaration is required when function is defined before the main../*/
    return x+y;
}
int main(void){
    int a=10,b=20,s;
    s=sum(a,b);
    printf("Sum =%d\n",s);
    return 0;
}