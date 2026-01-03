#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("%c\t", "Determination"[2]);     // t
    printf("%c\t", *("Determination" + 2)); // t
    printf("%s\t", "Determination" + 2);    // termination
    printf("Determination" + 2);
    printf("\t");
    printf("Determination" + strlen("Deepali"));
    printf("\t");
    printf("Determination" + sizeof("Deppali"));
    printf("\n");
    return 0;
}