/*
5 4 3 2 1 
5 4 3 2 
5 4 3 
5 4 
5 
*/

#include<stdio.h>

int main(void){
    for(int i=5; i>=1; i--){
        int k=5;
        for(int j=1; j<=i;j++){
            printf("%d ",k);
            k--;
        }
        printf("\n");
    }
    return 0;
}