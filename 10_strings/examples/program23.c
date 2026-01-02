/*P10.23 strspn(), strcspn()*/
#include <stdio.h>
#include <string.h>

int main(void)
{
    int p;
    p = strspn("c in depth", "abcd");
    printf("%d\n", p);
    p = strspn("2012", "0123456789");
    printf("%d\n", p);
    p = strspn("\tmain", " \t");
    printf("%d\n", p);

    p = strcspn("abcmno", "mno");
    printf("%d\n", p);
    return 0;
}