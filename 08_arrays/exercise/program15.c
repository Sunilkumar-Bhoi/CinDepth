#include <stdio.h>

int func(int arr[], int size)
{
    if (size == 0)
        return 0;
    return arr[size - 1] + func(arr, size - 1);
}
int main(void)
{
    int arr[10] = {1, 2, 3, 4, 8, 10};
    printf("%d\n", func(arr, 6)); // 28
    return 0;
}