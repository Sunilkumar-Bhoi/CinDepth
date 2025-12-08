#include<stdio.h>

int main(void){
    int x,y,z;
    x=8++;//illigle assignment of increment operator
    y=++x++;
    z=(x+y)--;
    printf("x=%d, y=%d, z=%d\n",x,y,z);
    return 0;
}