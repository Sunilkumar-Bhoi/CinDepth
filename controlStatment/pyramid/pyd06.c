/*
5
54
543
5432
54321
*/
#include<stdio.h>

int main(void){
    for(int i=1; i<=5; i++){
        int k=5;
        for(int j=1; j<=i; j++){
                printf("%d ",k);
                k--;
        }
        printf("\n");
    }
    return 0;
}