/*P10.12 Program to sort array of strings*/
#include <stdio.h>
#include <string.h>

#define N 5
#define LEN 10

int main(void)
{
    int i, j;
    char str[N][LEN] = {"white", "red", "green", "yellow", "blue"};
    printf("Before sorting:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%s\t",str[i]);
    }
    printf("\n");
    char temp[LEN];
    for ( i = 0; i < N-1; i++)
    {
        for ( j = i+1; j < N; j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
        
    }
    printf("After sorting:\n");
    for ( i = 0; i < N; i++)
    {
        printf("%s\t",str[i]);
    }
    
    return 0;
}