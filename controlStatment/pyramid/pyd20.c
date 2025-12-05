/*
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9
*/

#include<stdio.h>

int main(void){
    for(int i=1; i<=5; i++){
        for(int j=1;j<=(5-i)*2;j++){
            printf(" ");
        }
        for(int k=1; k<=2*i-1;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}