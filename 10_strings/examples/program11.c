/*P10.11 Program to print the atrings of the two-dimensional character array*/
#include <stdio.h>
#define N 5
#define LEN 10
int main(void)
{
    char str[N][LEN] = {
        "white",
        "red",
        "green",
        "yellow",
        "orange"};
    int i;
    for (i = 0; i < N; i++)
    {
        printf("String: %s\t", str[i]);
        printf("Address of string: %p\n", str[i]);
    }
}