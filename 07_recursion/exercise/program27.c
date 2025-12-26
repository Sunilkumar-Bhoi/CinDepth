/*Write a recursive function t o print these pyramids o f numbers.
First Pattern: 
1
1 2 
1 2 3 
1 2 3 4 

Secund Pattern: 
1 2 3 4 
1 2 3 
1 2 
1

Third Pattern: 
4 3 2 1 
3 2 1 
2 1 
1
*/
#include<stdio.h>
void firstPattern(int n);
void secundPattern(int n);
void thirdPattern(int n);
int main(void)
{
    printf("First Pattern: \n");
    firstPattern(4);
    printf("Secund Pattern: \n");
    secundPattern(4);
    printf("Third Pattern: \n");
    thirdPattern(4);
    printf("\n");
    return 0;
}

void firstPattern(int n)
{
    if(n==1)
    {
        printf("%d\n",n);
        return;
    }
    firstPattern(n-1);
    for(int i=1; i<=n;i++)
        printf("%d ",i);
    printf("\n");
}
void secundPattern(int n)
{
    if(n==1)
    {
        printf("%d\n",n);
        return;
    }
    for(int i=1; i<=n; i++)
        printf("%d ",i);
    printf("\n");
    secundPattern(n-1);
}
void thirdPattern(int n)
{
    if(n==1)
    {
        printf("%d",n);
        return;
    }
    for(int i=n; i>=1; i--)
        printf("%d ",i);
    printf("\n");
    thirdPattern(n-1);
}
