/*
1
23
456
78910
1112131415
*/
#include<stdio.h>

int main(void){
    int k=5;
    for(int i=1; i<=5; i++){
        for(int j=1; j<=i; j++){
                printf("%d ",k);
                k--;
        }
        printf("\n");
    }
    return 0;
}