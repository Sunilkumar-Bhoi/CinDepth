#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p, i, n;
    printf("Enter number of element to be entered: ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL)
    {
        printf("Memory not available\n");
        exit(1);
    }

    for (i = 0; i < n; i++)
    {
        printf("Enter an integer %d: ", i);
        scanf("%d", &p[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++)
        printf("%d ", p[i]);
    return 0;
}