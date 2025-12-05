/*
    1 
   1 2 
  1 2 3 
 1 2 3 4 
1 2 3 4 5 
*/

#include<stdio.h>

int main(void){
    for(int i=1; i<=5;i++){
        for(int k=1;k<=5-i; k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}