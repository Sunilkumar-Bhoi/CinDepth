/*P7.5 Progran to convert a positive decimal number to Binary, Octal or Hexadecimal*/

#include<stdio.h>
int octal(int n);
int hexa(int n);
int main(void)
{
    char base;
    int deci;
    printf("Enter a base 'o' or 'h': ");
    scanf(" %c",&base);
    printf("Enter decimal number: ");
    scanf("%d",&deci);
    if(base=='o')
        printf("%d decimal = %o octal",deci,octal(deci));
    else   
        printf("%d in decimal = %x in hexadecimal",deci,hexa(deci));
    return 0;
}
int octal(int n)
{
    if(n/10<8)
        return n;
    return n%10+1
}