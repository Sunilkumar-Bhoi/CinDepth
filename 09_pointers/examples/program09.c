/*9.11 Program to understand difference between pointer to an integeț and pointer to an array of integers*/
#include <stdio.h>

int main(void)
{
    int *p;        // pointer to integer : can point to an integer
    int (*ptr)[5]; // pointer to array : can point to an array of 5
    int arr[5] = {1, 2, 3, 4, 5};
    p = arr;
    ptr = &arr;
    printf("p=%p, ptr=%p\n", p, ptr);
    p++;   // only 4 byte shift
    ptr++; // add 5*4 byte shift
    printf("p=%p, ptr=%p\n", p, ptr);
    return 0;
}