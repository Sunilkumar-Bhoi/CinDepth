/*9.3 program to print size of pointer variables and size of values dereferenced by them*/
#include<stdio.h>

int main(void)
{
    char a='x',*p1=&a;
    int b=12, *p2=&b;
    float c=15.50, *p3=&c;
    double d=18.34, *p4=&d;
    printf("sizeof(p1)-%lu, sizeof(*p1)-%lu\n",sizeof(p1),sizeof(*p1));
    printf("sizeof(p2)-%lu, sizeof(*p2)-%lu\n",sizeof(p2),sizeof(*p2));
    printf("sizeof(p3)-%lu, sizeof(*p3)-%lu\n",sizeof(p3),sizeof(*p3));
    printf("sizeof(p4)-%lu, sizeof(*p4)-%lu\n",sizeof(p4),sizeof(*p4));
    return 0;
}