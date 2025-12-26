/*25. Write a recursive function to find the Binomial coefficient C(n,k) which is defined a:
C(n,0)=1
C(n,n)=1 -C(n,k) = C(n-1,k-1) + C(n-1,k)*/

#include <stdio.h>
int binomialCo(int n, int k);
int main(void)
{
    int n, k;
    printf("C and K: ");
    scanf("%d%d", &n, &k);

    int bc = binomialCo(n, k);
    printf("binomial cofficeient(%d,%d)= %d", n, k, bc);
    return 0;
}
int binomialCo(int n, int k)
{
    if(k==0 || n==k)
        return 1;
    return binomialCo(n-1,k-1)+binomialCo(n-1,k);
}