/*P7.5 Progran to convert a positive decimal number to Binary, Octal or Hexadecimal*/
#include<stdio.h>
void convert(int n, int b);
int main(void)
{
    int num;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    convert(num,2);     printf("\n");
    convert(num,8);     printf("\n"); 
    convert(num,16);   printf("\n");
    return 0;
}
void convert(int n,int b)
{
    int rem=n%b;
    if(n==0)
        return;
  convert(n/b,b);
    if(rem<10)
      printf("%d",rem);
    else  
        printf("%c",rem-10+'A');
}