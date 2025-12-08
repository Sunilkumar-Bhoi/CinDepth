/*Find the gum of this series upto n terms - 1 + 2 +
* 16 +.*/

#include<stdio.h>

int main(void){
    int n=1,term,sum=0;
    printf("Enter the number of term: ");
    scanf("%d",&term);

    for(int i=1; i<=term; i++){
        sum+=n;        
        n+=i;
    }
    printf("Sum = %d\n",sum);
    return 0;
}