#include <stdio.h>

int main(void)
{
    int i, arr[5]={25, 30, 35, 40, 45},*p;
    for(i=0; i<5; i++)
    {
        printf("%d",*arr);
        arr++;//name of array is constant pointer cant perform increment operation on it
    }
    return 0;
}