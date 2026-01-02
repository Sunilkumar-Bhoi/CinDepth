/*sort array of pointer contain string*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, j;
    char *arrp[] = {"white", "red", "green", "yellow", "blue"};
    printf("Before sorting:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%s\t",arrp[i]);
    }
    printf("\n");
    char *temp;
    for (i = 0; i < 4; i++)
    {
        int min_index = i;
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(arrp[min_index], arrp[j]) > 0)
                min_index = j;
        }
        if (arrp[i] != arrp[min_index])
        {
            temp = arrp[i];
            arrp[i] = arrp[min_index];
            arrp[min_index] = temp;
        }
    }
    printf("Array after sorting: \n");
    for (i = 0; i < 5; i++)
        printf("%s\t", arrp[i]);
    printf("\n");
    return 0;
}