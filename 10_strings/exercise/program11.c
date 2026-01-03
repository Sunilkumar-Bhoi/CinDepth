#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "lucknow";
    char *p=str;
    p=p+3;
    p[3]='t';
    printf("%s %s\n",str,p);//lucknow, 
    return 0;
}