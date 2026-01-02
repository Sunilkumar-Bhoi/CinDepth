/*P10.25 strtok()*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "...why?but:not?oh!, where when";
    char seps[] = "?;: ,.!\t";
    char *p;
    p = strtok(str, seps);
    while (p != NULL)
    {
        printf("%s ", p);
        p = strtok(NULL, seps);
    }
    printf("\n");
    return 0;
}