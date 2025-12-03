/*Program to find biggest number from three given number*/

#include<stdio.h>

int main(void){
 int a,b,c;
printf("Enter three number: ");
scanf("%d%d%d",&a,&b,&c);

if(a>b){
    if(a>c){
        printf("A is larger\n");
    }
    else{
        printf("C is larger\n");
    }
}
else{
    if(b>c){
        printf("B is larger\n");
    }
    else{
        printf("C is larger\n");
    }
}
return 0;
}