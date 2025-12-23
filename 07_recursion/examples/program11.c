/*,11 Progran to solve Tower of Hanot problem using recursion*/
#include <stdio.h>
void tohf(int ndisk, char source, char temp, char dest)
{
    if (ndisk == 1)
    {
        printf("move disk %d from %c-->%c\n", ndisk, source, dest);
        return;
    }
    tohf(ndisk-1,source,dest,temp);
    printf("move disk %d from %c-->%c\n",ndisk,source,dest);
    tohf(ndisk-1,temp,source,dest);
}
int main(void)
{
    int ndisk;
    char source = 'A', temp = 'B', dest = 'C';
    printf("Enter the disk number: ");
    scanf("%d", &ndisk);
    tohf(ndisk,source,temp,dest);
    return 0;
}