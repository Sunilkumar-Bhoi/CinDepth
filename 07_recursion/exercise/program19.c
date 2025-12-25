/*Write a recursive function that reverses an integer. For example if the inpur is 43287 then the funcrion should return the
integer 78234.*/
#include<stdio.h>
int reverse(int num, int rev);
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("revrsed: %d\n",reverse(num,0));
    return 0;
}
int reverse(int num, int rev)
{
    if(num==0)
        return rev;
    return reverse(num/10,rev*10+num%10);
}