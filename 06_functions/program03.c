#include<stdio.h>

int sum(int x,int y);

int sum(int x,int y){//local parameter
    return x+y;
}
int main(void){
    int a,b,s;
    printf("Enter a and b:");
    scanf("%d%d",&a,&b);

    s=sum(a,b);//actuall parameter 

    printf("Sum = %d\n",s);
}