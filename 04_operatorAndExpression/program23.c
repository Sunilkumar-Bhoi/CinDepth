/*Accept any two numbers, if the first number is greater than second then print the difference of these two numbers,
otherwise print their sum. Write this program using ternary operator.*/
#include<stdio.h>

int main(void){
    int a, b;

    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    printf("%d\n",a>b?a-b:a+b);

    return 0;
}