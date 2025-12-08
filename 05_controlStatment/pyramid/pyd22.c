/*
    5
   545
  54345
 5432345
543212345
*/

#include<stdio.h>

int main(void){
    for(int i=1; i<=5; i++){
        for(int j=1;j<=5-i;j++){
            printf(" ");
        }
        int p=5;
        for(int k=1;k<=i;k++){
            printf("%d",p--);
        }
        p=p+2;
        for(int l=1;l<=i-1;l++){
            printf("%d",p++);
        }
        printf("\n");
    }
    return 0;
}