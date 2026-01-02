/*P10.24* strstr()*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *ptr;
    ptr = strstr("placement section", "cement");
    printf("%s", ptr);
    return 0;
}
