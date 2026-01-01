#include <stdio.h>

int main(void)
{
    int a[5]={1},b[5]={1};
    if(a==b)
        printf("same");
    else    
        printf("Different");//array comparison always evaluates to false
    return 0;
}