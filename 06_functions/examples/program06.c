#include<stdio.h>

int larger(int x, int y);

int main(void){
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("Larger = %d\n",larger(a,b));
    return 0;
}
int larger(int x,int y){
    return x>y?x:y;
}