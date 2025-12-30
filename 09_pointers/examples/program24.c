/*P9.24 Progran for understanding array of pointers*/
#include <stdio.h>

int main(void)
{
    int i;
    int arr[5] = {1, 2, 3, 4, 5};
    int *pa[5];
    for (i = 0; i < 5; i++)
        pa[i] = &arr[i];

    for (i = 0; i < 5; i++)
    {
        printf("pa[%d]=%p\t",i, pa[i]);
        printf("*pa[%d] = %d\n",i, *pa[i]);
    }
    return 0;
}
