/*P10.20 strncmp*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    if (strncmp("Deepali", "Deepanjali", 4) == 0)
        printf("same\n");
    else
        printf("different\n");
    return 0;
}