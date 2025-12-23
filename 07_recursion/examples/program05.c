/*P7.5 Progran to convert a positive decimal number to Binary, Octal or Hexadecimal*/
#include <stdio.h>
void convert(int decimal, int base);
int main(void)
{
  int decimal;
  printf("enter a decimal number: ");
  scanf("%d", &decimal);
  convert(decimal, 2);
  printf("\n");
  convert(decimal, 8);
  printf("\n");
  convert(decimal, 16);
  printf("\n");
  return 0;
}
void convert(int decimal, int base)
{
  int rem = decimal % base;
  if (decimal==0)
    return; 
  convert(decimal/base, base);
  if (rem < 10)
    printf("%d", rem);
  else
    printf("%c", rem-10+'A');
}