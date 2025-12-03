/*The following program prints whether a number is even o r odd, and if the number is odd it is multiplied by 2.*/

#include<stdio.h>

int main(void){
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);

    if(a%2==0)
        printf("Number %d is even\n",a);
    else{
        printf("Number is odd\n");
        a*=2;
        printf("now the number is : %d\n",a);
    }

    return 0;
}