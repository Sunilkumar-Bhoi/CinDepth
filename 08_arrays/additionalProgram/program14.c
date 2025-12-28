/*Write a program to print all prime numbers less than integer n, using Sieve of Eratosthenes.
(i) Write down all integers from 2 to n sequentially.
(il) Cross out all multiples of 2.
(it) Find the next uncrossed number, and cross out all its multiples.
(iv) Repeat step (il) until we find an uncrossed number whose square is greater than n.
All the uncrossed numbers are prime.*/

#include <stdio.h>

int main(void)
{
    int n, i;
    printf("Enter n : ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        if (i % 2 != 0q)
            printf("%d ", i);
    }
    return 0;
}