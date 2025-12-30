/*program to undrstand dynamically allocation of memory*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, i, n;
    printf("Number of integer to be entered: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }
    for (i = 0; i < n; i++)
    {
        printf("Enter integer %d: ", i);
        scanf("%d", p + i);
    }
    for (i = 0; i < n; i++)
        printf("%d\t", *(p + i));
    return 0;
}