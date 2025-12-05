/*
5
44
333
4444
55555
*/
#include<stdio.h>

int main(void){
    int k=5;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
                printf("%d ",k);
        }
        printf("\n");
        k--;
    }
    return 0;
}