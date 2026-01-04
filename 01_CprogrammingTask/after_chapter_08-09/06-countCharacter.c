/*
Q6. Problem Statement: You are given a string s. Return the array of unique
characters, sorted by highest to lowest occurring characters.
If two or more characters have same frequency then arrange them in alphabetic
order.
*/
#include <stdio.h>
#include <string.h>
#define SIZE 100

void count(char *);

int main(void)
{
    char s[SIZE];
    printf("Enter string: ");
    fgets(s, SIZE, stdin);
    
    // FIX: This line removes the newline character '\n'
    s[strcspn(s, "\n")] = 0; 
    
    count(s);
    return 0;
}

void count(char *str)
{
    int i, j, n = strlen(str);
    int freqMap[256] = {0};

    // 1. Count Frequencies
    for (i = 0; i < n; i++)
        freqMap[(int)str[i]]++;

    // 2. Separate into Parallel Arrays
    char charList[256];
    int countList[256];
    int len = 0;

    for (i = 0; i < 256; i++)
    {
        // Only keep characters that actually appeared
        if (freqMap[i] != 0)
        {
            charList[len] = (char)i;
            countList[len] = freqMap[i];
            len++;
        }
    }

    // 3. SORTING LOGIC (Bubble Sort)
    for (i = 0; i < len - 1; i++)
    {
        for (j = 0; j < len - i - 1; j++)
        {
            int swapNeeded = 0;

            // Condition 1: Sort by Frequency (Descending: High to Low)
            if (countList[j] < countList[j+1]) 
            {
                swapNeeded = 1;
            }
            // Condition 2: If Frequency is same, Sort Alphabetically (Ascending: a to z)
            else if (countList[j] == countList[j+1]) 
            {
                if (charList[j] > charList[j+1]) 
                    swapNeeded = 1;
            }

            // SWAP BOTH ARRAYS
            if (swapNeeded)
            {
                // Swap Counts
                int tempCount = countList[j];
                countList[j] = countList[j+1];
                countList[j+1] = tempCount;

                // Swap Characters
                char tempChar = charList[j];
                charList[j] = charList[j+1];
                charList[j+1] = tempChar;
            }
        }
    }

    // 4. Print Result
    printf("Output: ");
    for(i = 0; i < len; i++)
    {
        printf("%c ", charList[i]);
    }
    printf("\n");
}