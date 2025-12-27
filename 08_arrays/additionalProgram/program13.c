/* Program to print a Magic Square of order n (where n is odd) */

#include <stdio.h>
#define MAX 20

int main(void)
{
    int n, i, j, num;
    int arr[MAX][MAX] = {0}; // Initialize array to 0

    printf("Enter n (must be odd): ");
    do
    {
        scanf("%d", &n);
        if (n % 2 == 0)
            printf("Magic square is only possible for odd numbers. Enter odd n: ");
    } while (n % 2 == 0);

    // --- Siamese Method Initialization ---
    // Start at Top Row, Middle Column
    i = 0;
    j = n / 2;

    for (num = 1; num <= n * n; num++)
    {
        arr[i][j] = num;

        // Optimization: If the number we just placed is a multiple of n,
        // the next number goes directly BELOW the current one.
        if (num % n == 0)
        {
            i++; 
        }
        else
        {
            // Otherwise, move UP and RIGHT
            i--;
            j++;

            // Wrap around row (if we go off top, go to bottom)
            if (i < 0)
                i = n - 1;
            
            // Wrap around column (if we go off right, go to left)
            if (j == n)
                j = 0;
        }
    }

    // --- Output ---
    printf("\nMagic Matrix of Order %d:\n\n", n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%4d ", arr[i][j]); // Corrected formatting (%4d)
        printf("\n");
    }

    return 0;
}