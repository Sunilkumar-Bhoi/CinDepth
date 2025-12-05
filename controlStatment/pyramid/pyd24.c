/*
555555555
 4444444
  33333
   222
    1
*/

#include<stdio.h>

int main(void){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int k=1;k<=2*(5-i)+1;k++){
            printf("%d",5+1-i);
        }
        printf("\n");
    }
}