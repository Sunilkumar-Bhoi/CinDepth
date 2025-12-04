/*p5.21 Program to generato fibonacci series
1, I, 2, 3, 5 , 8, 13, 34, 55, 89......
In this series each number is a sum of the previous two numbers*/

#include<stdio.h>

int main(void){
    long x=0, y=1, z;
    int n;
    printf("Enter number of terms : ");
    scanf("%d",&n);
    printf("%ld",y);
    for(int i=1; i<=n; i++){
        z=x+y;
        printf("%ld",z);
        x=y;
        y=z;
    }
    printf("\n");
    return 0;
}