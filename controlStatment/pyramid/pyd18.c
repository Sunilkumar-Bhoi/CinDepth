/*
    1
   222
  33333
 4444444
555555555
*/

#include<stdio.h>

int main(void){
    for(int i=1; i<=5; i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1;k++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}