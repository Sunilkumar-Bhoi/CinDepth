/* Write recursive functions to find values of [log2N] and [logbN]*/
#include<stdio.h>
int calLog(int base, int arg);
int main(void)
{
    int base, arg;
    printf("Enter base and argument(N): ");
    scanf("%d%d",&base,&arg);

    int y = calLog(base,arg);
    
    printf("log_2[%d]=%d\n",arg,calLog(2,arg));

    printf("log_%d[%d]=%d",base,arg,y);
    return 0;
}
int calLog(int base , int arg)
{
    if(arg==1)
        return 0;
    return 1+calLog(base, arg/base);
}