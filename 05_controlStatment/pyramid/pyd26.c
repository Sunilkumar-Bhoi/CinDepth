/*
 567898765
  4567654
   34543
    232
     1
*/

#include<stdio.h>

int main(void){
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        int p=5+1-i;
        for(int k=1;k<=5-i+1;k++){
            printf("%d",p++);
        }
        p=p-2;
        for(int l=1;l<=5-i;l++){
            printf("%d",p--);
        }
        printf("\n");
    }
}