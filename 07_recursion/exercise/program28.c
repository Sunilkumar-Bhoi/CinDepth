/*A triangular number is the number o  dots required t o fill an equilateral triangle. The first 4 triangular numbers are 1, 3
6,10.Write a recursive function that returns n " triangular number*/
#include<stdio.h>
int triangleNo(int n);
int main(void)
{
    int n;
    printf("Enter nth term: ");
    scanf("%d",&n);
    printf("nth triangular number = %d\n",triangleNo(n));
    return 0;
}
int triangleNo(int n)
{
    if(n==1)
        return 1;
    return n+triangleNo(n-1);
}