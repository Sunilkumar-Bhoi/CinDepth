#include <stdio.h>

int main(void)
{
    int i, arr[5] = {25, 30, 35, 40, 45}, *p = arr;
    for (i = 0; i < 5; i++)
    {
        (*p)++;//de referance p and increament
        printf("%d ",*p);
        p++;//pointer type is integer after increament point to next integer in array or p+sizeof(int)
    }
        return 0;
}