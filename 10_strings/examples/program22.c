/*P10.22 strpbrk()*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *p;
    p = strpbrk("Sunil", "Bhoi");
    printf("%s\n", p);
    return 0;
}