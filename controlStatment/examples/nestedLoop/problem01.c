/*P5.24 Program to underatand nesting in fox loop*/

#include<stdio.h>

int main(void){
    int i, j;
    for(i=0; i<5; i++){
        printf("i=%d\n",i);
        for(j=0;j<4;j++){
            printf("j=%d\t",j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}