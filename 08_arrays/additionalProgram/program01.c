/*P8.16 Program to convert a num number to binary, octal or hexadacinal*/
#include <stdio.h>
void convert(int num, int arr[], int base);
void displayArray(int arr[], int n);
int main(void)
{
    int arr[15], i, num, choice;
    printf("Enter num number: ");
    scanf("%d", &num);
    printf("Enter choice:\t1. Binary\t2. octal\t3. hexanum : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Binary equavalent is : ");
        convert(num, arr, 2);
        break;
    case 2:
        printf("Octal equavalent is : ");
        convert(num, arr, 8);
        break;
    case 3:
        printf("Hexadecimal equavalent is : ");
        convert(num, arr, 16);
        break;
    default:
        printf("please enter correct choice!!!\n");
    }
    printf("\n");

    return 0;
}
void convert(int num, int arr[], int base)
{
    int i = 0, count = 0;
    do
    {
        arr[i] = num % base;
        num /= base;
        count++;
        i++;
    } while (num != 0);

    displayArray(arr, count);
}
void displayArray(int arr[], int n)
{
    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > 9)
            printf("%c", arr[i] - 10 + 'A');
        else
            printf("%d", arr[i]);
    }
}