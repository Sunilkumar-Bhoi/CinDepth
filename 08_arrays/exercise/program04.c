#include<stdio.h>

void func(int arr[]);
int main(void)
{
    int arr[5]={5,10,15,20,25};
    func(arr);
    return 0;
}
void func(int arr[])
{
    int i=5,sum=0;
    while(i>2)
        sum=sum+arr[--i];//25+20+15=45
    printf("sum=%d\n",sum);//45
}