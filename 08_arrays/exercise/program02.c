#include<stdio.h>

int main(void)
{
    int arr[4]={2,4,8,16},i=3,j=0;
    while(i)
    {
        j+=arr[i];
        i--;
    }
    printf("j=%d\n",j);//14 x 28 i=3,2,1
    return 0;
}
