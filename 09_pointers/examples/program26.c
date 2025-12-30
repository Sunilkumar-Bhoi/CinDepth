/*dereferancing a void pointer*/
#include<stdio.h>

int main(void)
{
    int a=5;
    float b=1.5, *fp=&b;
    void *vp;
    vp=&a;;
    printf("value of a = %d\n",*(int *)vp);
    *(int *)vp=12;
    printf("value of vp = %d\n",*(int *)vp);
    vp=fp;
    printf("value of vp=%f",*(float*)vp);
    return 0;
}