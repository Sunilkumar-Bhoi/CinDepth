/*dcisplaying number from 1 to n*/
#include<stdio.h>

void display1(int num)
{
    if(num==0)
        return;
    printf("%d ",num);
    display1(num-1);
}
void display2(int num)
{
    if(num==0)
        return;
    display2(num-1);
    printf("%d ",num);
}
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    display2(num);
    return 0;
}