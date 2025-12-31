#include <stdio.h>

int main(void)
{
    int x, arr[8] ={11,22,33,44,55,66,77,88};
    int *p,*q;
    q=arr/2; //division is not an pointer arithematic
    p=q*2;//multply is not an pointer arithematic 
    printf("%d  %d\n",*p,*q);
    return 0;
}