#include<stdio.h>

void drawline(void);/*function declaration*/

void drawline(void){ /*function defination*/
    for(int i=0;i<80;i++)
        printf("-");
}

int main(void){
    drawline();/*function call*/
    return 0;
}
