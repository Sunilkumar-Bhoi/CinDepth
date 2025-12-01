#include<stdio.h>

int main(void){
    int x,y,z,k=10;
    k+=(x=5,y=x+2,z=x+y); //k=10+(12)=22
    printf("x=%d, y=%d, z=%d, k=%d\n",x,y,z,k);//5,7,12,22
    return 0;
}