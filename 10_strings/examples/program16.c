/*P10.16 Program to isput a date and print the month*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int d, m, y;
    char *months[] = {"january", "february", "march", "april", "may", "june", "july", "agust", "september", "octomber", "november", "december"};
    printf("Enter date: ");
    scanf("%d-%d-%d", &d, &m, &y);
    printf("%d %s %d",d,months[m-1],y);
    printf("\n");
    return 0;
}