/*pointer arithematic on void pointer*/
#include<stdio.h>
int main(void)
{
    int i;
    float a[5]={1.2,1.3,1.4,1.5,1.1};
    void *vp;
    vp=a;
    for(i=0; i<5; i++)
    {
        printf("%.1f\n",*(float *)vp);
        vp=(float *)vp+1;
    }
    printf("\n");
    return 0;
}