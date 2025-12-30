/*passing 1-D array to a function*/
#include <stdio.h>
void func(int arr[]);
int main(void)
{
    int i, a[5] = {1, 2, 3, 4, 5};
    func(a);
    printf("Inside main: ");
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}
void func(int arr[])
{
    printf("Inside function: ");
    for (int i = 0; i < 5; i++)
    {
        arr[i]=arr[i]+2;
        printf("%d ", arr[i]);
    }
}