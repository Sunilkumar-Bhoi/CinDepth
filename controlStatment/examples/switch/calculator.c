/*P5.34 Program to pérform arichmetic calculations on integers*/

#include<stdio.h>

int main(void){
    int a,b;
    char op;
    printf("Enter number 1 number 2 and operation: ");
    scanf("%d %c %d",&a,&op,&b);

    switch(op){
        case '+':
            printf("%d + %d = %d\n",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d\n",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d\n",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d\n",a,b,a/b);
            break;
        case '%':
            printf("%d modulo %d = %d\n",a,b,a%b);
            break;
        default:
            printf("Error in choice\n");
    }
    return 0;
}