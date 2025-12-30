/*Program to verify the fact that when an array 1s passed to a function, the receiving parameter is
declared an a pointer*/
#include <stdio.h>
void func(double d[], int *i, char c[5]);
int main(void)
{
    double d_arr[5] = {1.3, 2.1, 3.3, 4.5, 5.0};
    int i_arr[5] = {1, 2, 3, 4, 5};
    char c_arr[5] = {'a', 'b', 'c', 'd', 'e'};
    printf("Inside main function: ");
    printf("Sizeof(d_arr)=%lu\t", sizeof(d_arr));
    printf("Sizeof(i_arr)=%lu\t", sizeof(i_arr));
    printf("Sizeof(c_arr)=%lu\t", sizeof(c_arr));
    printf("%p %p %p\n",d_arr,i_arr,c_arr);
    func(d_arr, i_arr, c_arr);
    return 0;
}
void func(double d[], int *i, char c[5])
{
    printf("Inside func function: ");
    printf("Sizeof(d)=%lu\t", sizeof(d));
    printf("Sizeof(i)=%lu\t", sizeof(i));
    printf("Sizeof(c)=%lu\t",sizeof(c));
    printf("%p %p %p",d,i,c);
}
