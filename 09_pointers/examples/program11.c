/*p9.10 Program to print the value and address of array elementa by subscripting a pointar
variablet*/
#include<stdio.h>
int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr=arr;
    /*arr will always point out base address or starting address of an array we cant assign another address, increament or adiition
    so we use pointer for do that*/
    for(int i=0; i<5; i++)
    {
        printf("value of arr[%d] = %d %d %d\t",i,*(arr+i),*(ptr+i),arr[i]);
        printf("address of arr[%d] = %p %p %p\n",i,arr+i, ptr+i,&arr[i]);
    }
    return 0;
}