/*program to display and find out sum of series*/
#include<stdio.h>
int display(int n)
{ 
    int sum;
    if(n==0)
        return 0;
    sum = n + display(n-1);
    printf("%d + ",n);
    return sum;
}
int main(void)
{
    int num;
    printf("enter number : ");
    scanf("%d",&num);
    printf("\b\b= %d\n",display(num));
    return 0;
}