/*P9.1 Program to print address of vartables using address operator*/
#include<stdio.h>

int main(void)
{
    int age =30;
    float salary = 1500.00;
    printf("Address of age is %p\n",&age);
    printf("Address of salary is %p\n",&salary);
    return 0;
}