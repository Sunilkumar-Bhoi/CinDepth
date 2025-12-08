#include<stdio.h>
void func(int a,int b);

int main(void){
    int x=10,y=20;
    func(x,y);
    printf("%d\t%d\n",x,y);
    return 0;
}

void func(int a ,int b){
    a++;
    b--;
    printf("%d\t%d\n",a,b);
}