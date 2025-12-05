/*
1 1 1 1 1 
2 2 2 2 
3 3 3 
4 4 
5
*/

#include<stdio.h>

int main(void){
    int k=1;
    for(int i=5; i>=1; i--){
        for(int j=1; j<=i;j++){
            printf("%d ",k);
        }
        printf("\n");
        k++;
    }
    return 0;
}